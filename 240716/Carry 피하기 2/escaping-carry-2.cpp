#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define pb push_back


int main(){
    int N;
    cin >> N;
    vector<int> v;
    vector<pair<vector<int>, int> > ans;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.pb(a);
        vector<int> v2;
        v2.push_back(cnt);
        ans.pb(make_pair(v2, a));
        cnt++;
    }
    int ind = 2;
    int maxnum = -1e7;
    while(ind < N){
        vector<pair<vector<int>, int> > ans2;
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < v.size(); j++){
                auto test = find(ans[i].first.begin(), ans[i].first.end(), j);
                if(test == ans[i].first.end()){
                    int key1 = ans[i].second;
                    int key2 = v[j];
                    bool is_allowed = true;
                    while(key1 != 0 && key2 != 0){
                        if((key1%10+key2%10) >= 10) {is_allowed = false; break;}
                        key1 /= 10;
                        key2 /= 10;
                    }
                    if(is_allowed){
                        maxnum = max(maxnum, ans[i].second + v[j]);
                        vector<int> v2;
                        vector<int>::iterator it = v2.end();
                        v2.insert(it, ans[i].first.begin(), ans[i].first.end());
                        v2.push_back(j);
                        ans2.pb(make_pair(v2, ans[i].second + v[j]));
                    }
                }
            }
        }
        ans = ans2;
        ind++;
    }
    cout << maxnum;
}
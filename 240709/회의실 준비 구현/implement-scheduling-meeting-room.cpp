#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, int> > v;
    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), compare);
    int cnt = 1, num = v[0].second;
    for(int i = 1; i < v.size(); i++){
        if(v[i].first >= num){
            cnt++;
            num = v[i].second;
        }
    }
    cout << cnt;
}
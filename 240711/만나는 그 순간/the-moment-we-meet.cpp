#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    vector<pair<int, int> > v1, v2;
    int t = 0;
    v1.push_back(make_pair(0, 0));
    v2.push_back(make_pair(0, 0));
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        char dir;
        int time;
        cin >> dir >> time;
        for(int j = 1; j <= time; j++){
            t++;
            if(dir == 'R') v1.push_back(make_pair(t, v1[t-1].second+1));
            else v1.push_back(make_pair(t, v1[t-1].second-1));
        }
    }
    t = 0;
    for(int i = 0; i < M; i++){
        char dir;
        int time;
        cin >> dir >> time;
        for(int j = 1; j <= time; j++){
            t++;
            if(dir == 'R') v2.push_back(make_pair(t, v2[t-1].second+1));
            else v2.push_back(make_pair(t, v2[t-1].second-1));
        }
    }
    int idx = -1;
    for(int i = 1; i < min(v1.size(), v2.size()); i++){
        if(v1[i].second == v2[i].second) {idx = v1[i].first; break;}
    }
    cout << idx;
}
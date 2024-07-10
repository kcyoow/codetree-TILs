#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main(){
    int N, K, P, T;
    cin >> N >> K >> P >> T;
    vector<tuple<int, int, int> > log;
    vector<pair<int, int> > dev;
    dev.push_back(pair(0, 0));
    for(int i = 0; i < T; i++){
        int t, x, y;
        cin >> t >> x >> y;
        log.push_back(make_tuple(t, x, y));
    }
    for(int i = 1; i <= N; i++){
        if(P == i) dev.push_back(make_pair(1, K));
        else dev.push_back(make_pair(0, K));
    }
    sort(log.begin(), log.end());
    for(int i = 0; i < log.size(); i++){
        pair infx = dev[get<1>(log[i])], infy = dev[get<2>(log[i])];
        if(infx.first == 1 && infx.second > 0){
            dev[get<2>(log[i])].first = 1;
            dev[get<1>(log[i])].second--;
        }
        if(infy.first == 1  && infy.second > 0){
            dev[get<1>(log[i])].first = 1;
            dev[get<2>(log[i])].second--;
        }
    }
    for(int i = 1; i < dev.size(); i++){
        cout << dev[i].first;
    }
}
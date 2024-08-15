#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    int N, M, arr[51][51], visited[51][51], dir[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}}, zone = -1, K = 1;
    stack<pair<int, int> > s;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    int maxzone = -1;
    int idx = -1;
    while(zone != 0){
        zone = 0;
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(visited[i][j] == 0 && arr[i][j] > K){
                    s.push(make_pair(i, j));
                    visited[i][j] = 1;
                    while(!s.empty()){
                        int y = s.top().first;
                        int x = s.top().second;
                        s.pop();
                        for(int u = 0; u < 4; u++){
                            int dy = y+dir[u][1];
                            int dx = x+dir[u][0];
                            if(!visited[dy][dx] && arr[dy][dx] > K && dy >= 0 && dy < N && dx >= 0 && dx < M){
                                visited[dy][dx] = 1;
                                s.push(make_pair(dy, dx));
                            }
                        }
                    }
                    zone++;
                }
            }
        }
        if(maxzone < zone){
            maxzone = zone;
            idx = K;
        }
        K++;
    }
    cout << idx << ' ' << maxzone;

}
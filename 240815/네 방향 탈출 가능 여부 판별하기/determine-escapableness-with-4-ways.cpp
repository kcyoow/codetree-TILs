#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int m, n, arr[101][101], visited[101][101] = {0, }, dir[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
    queue<pair<int, int> > q;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    bool available = false;
    q.push(make_pair(0, 0));
    visited[0][0] = 1;
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        if(y == n-1 && x == m-1){
            available = true;
            break;
        }
        for(int k = 0; k < 4; k++){
            int dy = y+dir[k][1];
            int dx = x+dir[k][0];
            if(!visited[dy][dx] && arr[dy][dx] == 1 && dy >= 0 && dy < n && dx >= 0 && dx < m){
                visited[dy][dx] = 1;
                q.push(make_pair(dy, dx));
            }
        }
    }
    if(available) cout << 1;
    else cout << 0;

}
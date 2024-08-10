#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N, M, arr[101][101], visited[101][101] = {0, }, dir[2][2] = {{0, 1}, {1, 0}};
    stack<pair<int, int> > s;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int a;
            cin >> a; 
            arr[i][j] = a;
        }
    }
    
    s.push(make_pair(0, 0));
    bool isAvailable = false;
    while(!s.empty()){
        int y = s.top().first;
        int x = s.top().second;
        s.pop();
        visited[y][x] = 1;
        if(y == N-1 && x == M-1){
            isAvailable = true;
            break;
        }
        for(int i = 0; i < 2; i++){
            int dy = y+dir[i][1];
            int dx = x+dir[i][0];
            if((!visited[dy][dx]) && (arr[dy][dx] != 0) && (dy >= 0 && dy < N && dx >= 0 && dx < M)){
                s.push(make_pair(dy, dx));
            }
        }
    }
    if(isAvailable) cout << 1;
    else cout << 0;

    
}
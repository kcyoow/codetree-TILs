#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N, M, Q, a[101][101];
    cin >> N >> M >> Q;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }
    while(Q--){
        int visited[101] = {0,};
        pair<int, char> p;
        cin >> p.first >> p.second;
        p.first--;
        stack<pair<int, char>> s;
        s.push(p);
        while(!s.empty()){
            p = s.top();
            s.pop();
            visited[p.first] = 1;
            if(p.second == 'R'){
                int tmp = a[p.first][0];
                for(int i = 0; i < M-1; i++){
                    a[p.first][i] = a[p.first][i+1];
                }
                a[p.first][M-1] = tmp;
            } else {
                int tmp = a[p.first][M-1];
                for(int i = M-2; i >= 0; i--){
                    a[p.first][i+1] = a[p.first][i];
                }
                a[p.first][0] = tmp;
            }
            bool up = false, down = false;
            for(int i = 0; i < M; i++){
                if(p.first+1 < N && !visited[p.first+1]){
                    if(a[p.first+1][i] == a[p.first][i]) down=true;
                }
                if(p.first-1 >= 0 && !visited[p.first-1]){
                    if(a[p.first-1][i] == a[p.first][i]) up=true;
                }
            }
            char a = p.second=='R'?'L':'R';
            if(up) s.push(make_pair(p.first-1,a));
            if(down) s.push(make_pair(p.first+1,a));
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
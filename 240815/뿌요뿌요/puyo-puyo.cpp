#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    int N, arr[101][101], visited[101][101] = {0, }, dir[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
    stack<pair<int, int> > s;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    int maxnum = -1;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j]){
                int num = 1;
                int idx = arr[i][j];
                visited[i][j] = 1;
                s.push(make_pair(i, j));
                while(!s.empty()){
                    int y = s.top().first;
                    int x = s.top().second;
                    s.pop();
                    for(int k = 0; k < 4; k++){
                        int dy = y+dir[k][1];
                        int dx = x+dir[k][0];
                        if(!visited[dy][dx] && arr[dy][dx] == idx && dy >= 0 && dy < N && dx >= 0 && dx < N){
                            num++;
                            visited[dy][dx] = 1;
                            s.push(make_pair(dy, dx));
                        }
                    }
                }
                if(num >= 4){
                    cnt++;
                }
                maxnum = max(num, maxnum);
            }
        }
    }
    cout << cnt << ' ' << maxnum;
}
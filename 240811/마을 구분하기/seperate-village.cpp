#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, arr[26][26], visited[26][26] = {0, }, dir[4][2] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
    stack<pair<int, int> > s;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j] && arr[i][j] == 1){
                s.push(make_pair(i, j));
                int cnt = 1;
                visited[i][j] = 1;
                while(!s.empty()){
                    int y = s.top().first;
                    int x = s.top().second;
                    s.pop();
                    for(int k = 0; k < 4; k++){
                        int dy = y+dir[k][1];
                        int dx = x+dir[k][0];
                        if(!visited[dy][dx] && arr[dy][dx] != 0 && dy >= 0 && dy < N && dx >= 0 && dx < N){
                            visited[dy][dx] = 1;
                            cnt++;
                            s.push(make_pair(dy, dx));
                        }
                    }
                }
                v.push_back(cnt);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
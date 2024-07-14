#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    int check[101][101] = {0, };
    int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int cnt = 1;
    int d = 0;
    pair<int, int> p = make_pair(0, 0);
    check[p.second][p.first] = cnt;
    cin >> n >> m;
    while(cnt < (n*m)){
        cnt++;
        if(check[p.second+dir[d][1]][p.first+dir[d][0]] != 0 || (p.first+dir[d][0]) < 0 || (p.first+dir[d][0]) >= m || (p.second+dir[d][1]) < 0 || (p.second+dir[d][1]) >= n){d = (d+1)%4;}
        p.first += dir[d][0];
        p.second += dir[d][1];
        cout << "cnt = " << cnt << endl;
        cout << p.second << ' ' << p.first << endl;
        check[p.second][p.first] = cnt;
        // cout << p.first << ' ' << p.second << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << check[i][j] << ' ';
        }
        cout << endl;
    }
}
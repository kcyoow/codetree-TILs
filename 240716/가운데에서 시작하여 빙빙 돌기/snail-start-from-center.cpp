#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int check[101][101] = {0, };
    int dir[4][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
    int cnt = 1;
    int d = 0;
    cin >> n;
    pair<int, int> p = make_pair(n/2, n/2);
    check[p.second][p.first] = cnt;
    while(cnt < (n*n)){
        cnt++;
        p.first += dir[d][0];
        p.second += dir[d][1];
        check[p.second][p.first] = cnt;
        if(check[p.second+dir[(d+1)%4][1]][p.first+dir[(d+1)%4][0]] == 0 || (p.first+dir[d][0]) < 0 || (p.first+dir[d][0]) >= n || (p.second+dir[d][1]) < 0 || (p.second+dir[d][1]) >= n){d = (d+1)%4;}
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << check[i][j] << ' ';
        }
        cout << endl;
    }
}
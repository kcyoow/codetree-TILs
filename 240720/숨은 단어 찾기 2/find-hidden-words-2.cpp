#include <iostream>

using namespace std;

int main() {
    int N, M;
    char chararr[51][51];
    int dir[8][2] = {{0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}};
    char a[3] = {'L', 'E', 'E'};
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> chararr[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int p = 0; p < 8; p++){
                int charcnt = 0;
                for(int q = 0; q <= 2; q++){
                    int y = i + (dir[p][1]*q);
                    int x = j + (dir[p][0]*q);
                    if(y >= 0 && y < N && x >= 0 && x < M){
                        if(chararr[y][x] == a[charcnt]){
                            charcnt++;
                        }
                        else break;
                    }
                }
                if(charcnt == 3) cnt++;
            }
        }
    }
    cout << cnt;
}
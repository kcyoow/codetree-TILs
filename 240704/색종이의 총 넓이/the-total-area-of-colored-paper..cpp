#include <iostream>
using namespace std;

int main() {
    int N, arr[110][110] = {0,};
    cin >> N;
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        for(int i = x; i < x+8; i++){
            for(int j = y; j < y+8; j++){
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); i++){
        for(int j = 0; j < sizeof(arr)/sizeof(*arr); j++){
            if(arr[i][j] == 1){
                cnt++;
            }
        }
    }
    cout << cnt;
}
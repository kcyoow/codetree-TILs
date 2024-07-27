#include <iostream>

using namespace std;

int main(){
    int N, arr[21][21] = {0, };
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int a; cin >> a;
            arr[i][j] = a;
        }
    }
    int maxc = -1e7;
    for(int i = 0; i <= N-3; i++){
        for(int j = 0; j <= N-3; j++){
            int cnt = 0;
            for(int p = i; p < i+3;p++){
                for(int q = j; q < j+3; q++){
                    if(arr[p][q])cnt++;
                }
            }
            maxc = max(cnt, maxc);
        }
    }
    cout << maxc;
}
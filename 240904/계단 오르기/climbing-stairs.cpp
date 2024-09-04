#include <iostream>

using namespace std;
int arr[1001];
int main(){
    int N;
    cin>> N;
    fill(arr, arr+1001, -1);
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i = 4; i <= N; i++){
        arr[i] = (arr[i-2]+arr[i-3])%10007;

    }
    cout << arr[N];
}
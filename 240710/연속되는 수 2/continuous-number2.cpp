#include <iostream>

using namespace std;

int main(){
    int N, arr[1001], cnt = 1, max = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        arr[i] = a;
        if(i == 0 || arr[i] != arr[i-1]) cnt = 1;
        else cnt++;
        max = (max<cnt?cnt:max);
    }
    cout << max;
}
#include <iostream>

using namespace std;

int main() {
    int n, t, arr[1001], cnt, max = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr[i] = a;
        if(i == 0 || arr[i-1] >= arr[i]) cnt = 0;
        else{
            if(arr[i] > t) cnt++;
        }
        max = (max<cnt?cnt:max);
    }
    cout << max;
}
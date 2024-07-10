#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//     int n, t, arr[1001], cnt1, cnt2, max1 = 0, max2 = 0;
//     cin >> n >> t;
//     for(int i = 0; i < n; i++){
//         int a;
//         cin >> a;
//         arr[i] = a;
//         if(i == 0) {cnt1 = (arr[i] > t?1:0); cnt2 = (arr[i] > t?1:0);}
//         else if(arr[i-1] > arr[i]) {cnt1 = (arr[i] > t?1:0);cnt2 += (arr[i] > t ? 1:0);}
//         else if(arr[i-1] < arr[i]) {cnt2 = (arr[i] > t?1:0);cnt1 += (arr[i] > t ? 1:0);}
//         else{
//             // cout << "main = " << arr[i] << " cnt = " << cnt << endl;
//             if(arr[i] > t) {cnt1++; cnt2++;}
//         }
//         cout << "main = " << arr[i] << " cnt1 = " << cnt1 << " cnt2 = " << cnt2 << endl;
//         max1 = max(max1, cnt1);
//         max2 = max(max2, cnt2);
//     }
//     cout << max(max1, max2);
// }

int main(){
    int n, t, cnt = 0, max1 = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a <= t) cnt = 0;
        else cnt++;
        max1 = max(max1, cnt);
    }
    cout << max1;
}
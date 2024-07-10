#include <iostream>
#include <algorithm>
using namespace std;

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
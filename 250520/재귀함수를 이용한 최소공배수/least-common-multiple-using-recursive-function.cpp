#include <iostream>
#include <cmath>

using namespace std;

int n;
int arr[10];
int test[4] = {0, 0, 0, 0};
void eee(int n, int num, int cnt){
    if(n < 0) return;
    if(arr[n] == 1) {
        if(num==2) test[0]=(test[0]<cnt?cnt:test[0]);
        if(num==3) test[1]=(test[1]<cnt?cnt:test[1]);
        if(num==5) test[2]=(test[2]<cnt?cnt:test[2]);
        if(num==7) test[3]=(test[3]<cnt?cnt:test[3]);
    }
    if(arr[n]%2==0){
        arr[n]/=2;
        eee(n, 2, cnt+1);
    }
    if(arr[n]%3==0){
        arr[n]/=3;
        eee(n, 3, cnt+1);
    }
    if(arr[n]%5==0){
        arr[n]/=5;
        eee(n, 5, cnt+1);
    }
    if(arr[n]%7==0){
        arr[n]/=7;
        eee(n, 7, cnt+1);
    }
    eee(n-1, 0, 0);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    eee(n-1, 0, 0);
    int mul=1;
    // Please write your code here.
    for(int i = 0; i < n; i++){
        mul*=arr[i];
    }
    mul*=(pow(2,test[0])*pow(3,test[1])*pow(5,test[2])*pow(7,test[3]));
    cout << mul;
    return 0;
}
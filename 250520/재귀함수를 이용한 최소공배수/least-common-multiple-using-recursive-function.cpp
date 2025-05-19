#include <iostream>
#include <cmath>

using namespace std;

int n;
int arr[10];
int test[4] = {0, 0, 0, 0};
void eee(int n, int tests[4]){
    if(n < 0) return;
    if(arr[n] == 1) {
        for(int i = 0; i < 4; i++){
            if(test[i]<tests[i])test[i]=tests[i];
        }
        return;
    }
    if(arr[n]%2==0){
        arr[n]/=2;
        tests[0]++;
        eee(n, tests);
    }
    if(arr[n]%3==0){
        arr[n]/=3;
        tests[1]++;
        eee(n, tests);
    }
    if(arr[n]%5==0){
        arr[n]/=5;
        tests[2]++;
        eee(n, tests);
    }
    if(arr[n]%7==0){
        arr[n]/=7;
        tests[3]++;
        eee(n, tests);
    }
    int t[4] = {0,};
    eee(n-1, t);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int t2[4] = {0,};
    eee(n-1,t2);
    int mul=1;
    // Please write your code here.
    for(int i = 0; i < n; i++){
        mul*=arr[i];
    }
    mul*=(pow(2,test[0])*pow(3,test[1])*pow(5,test[2])*pow(7,test[3]));
    cout << mul;
    return 0;
}
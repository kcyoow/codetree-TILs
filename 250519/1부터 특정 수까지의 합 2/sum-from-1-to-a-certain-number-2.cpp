#include <iostream>

using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return n + sum(n-1);
}

int N;

int main() {
    cin >> N;
    cout << sum(N);
    // Please write your code here.

    return 0;
}
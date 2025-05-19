#include <iostream>
#include <cmath>

using namespace std;

int N;

int sum(int n){
    if(n == 0) return 0;
    return pow(n%10, 2) + sum(n/10);
}

int main() {
    cin >> N;
    // Please write your code here.
    cout << sum(N);
    return 0;
}
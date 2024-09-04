#include <iostream>
using namespace std;
int memo[1001], cnt3, cnt2;
int fibbo(int n){
    if(memo[n]!=-1) return memo[n];
    if(n<=2) memo[n] = 1;
    else memo[n] = fibbo(n-1)+fibbo(n-2);
    return memo[n];
}
int main() {
    int N;
    cin >> N;
    fill(memo, memo+1001, -1);
    cout << fibbo(N);
}
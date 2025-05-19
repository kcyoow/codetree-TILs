#include <iostream>

using namespace std;

int N, cnt=0;
void count(int n) {
    if(n == 1){
        cout << cnt;
        return;
    }
    cnt++;
    count(n%2?n/3:n/2);
}
int main() {
    cin >> N;
    count(N);
    // Please write your code here.

    return 0;
}
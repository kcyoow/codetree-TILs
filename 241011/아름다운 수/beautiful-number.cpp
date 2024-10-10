#include <iostream>
using namespace std;
int ans = 0;
void choose(int num){
    if(num <= 0){
        ans++;
        return;
    }
    for(int i = 1; i <= 4; i++){
        if(num-i < 0) continue;
        choose(num-i);
    }
}
int main(){
    int n;
    cin >> n;
    choose(n);
    cout << ans;
}
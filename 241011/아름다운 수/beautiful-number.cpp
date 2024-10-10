#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int ans = 0;
void choose(int num){
    if(num <= 0){
        ans++;
        return;
    }
    for(int i = 1; i <= 4; i++){
        if(num-i < 0) continue;
        for(int j = 0; j < i; j++) v.push_back(i);
        choose(num-i);
        for(int j = 0; j < i; j++) v.pop_back();
    }
}
int main(){
    int n;
    cin >> n;
    choose(n);
    cout << ans;
}
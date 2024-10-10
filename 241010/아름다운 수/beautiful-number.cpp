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
    v.push_back(1);
    choose(num-1);
    v.pop_back();
    if(num-2 >= 0){
        v.push_back(2);
        v.push_back(2);
        choose(num-2);
        v.pop_back();
        v.pop_back();
    }
    if(num-3 >= 0){
        v.push_back(3);
        v.push_back(3);
        v.push_back(3);
        choose(num-3);
        v.pop_back();
        v.pop_back();
        v.pop_back();
    }
    if(num-4 >= 0){
        v.push_back(4);
        v.push_back(4);
        v.push_back(4);
        v.push_back(4);
        choose(num-4);
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
    }
}
int main(){
    int n;
    cin >> n;
    choose(n);
    cout << ans;
}
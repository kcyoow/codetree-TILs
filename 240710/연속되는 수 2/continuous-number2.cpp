#include <iostream>

using namespace std;

int main(){
    int N, cnt = 1, before, max = -1e5;
    cin >> N;
    cin >> before;
    for(int i = 1; i < N; i++){
        int a;
        cin >> a;
        if(i == 0 || a != before) {max = (max<cnt?cnt:max); cnt = 1;}
        else cnt++;
        before = a;
    }
    cout << max;
}
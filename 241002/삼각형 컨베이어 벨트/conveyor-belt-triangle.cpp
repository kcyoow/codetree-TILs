#include <iostream>

using namespace std;

int main(){
    int a[610], t, n;
    cin >> n >> t;
    t%=(3*n);
    t = t>0?3*n-t:0;
    for(int i = 0; i < 3*n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 3*n; i++){
        cout << a[t] << ' ';
        t=(t+1)%(3*n);
        if(i == n-1){
            cout << endl;
        } else if( i == 2*n-1){
            cout << endl;
        }
    }

}
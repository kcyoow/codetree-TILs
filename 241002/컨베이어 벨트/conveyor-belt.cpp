#include <iostream>

using namespace std;

int main(){
    int a[405], t, n;
    cin >> n >> t;
    t%=(2*n);
    t = 2*n-t;
    for(int i = 0; i < 2*n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 2*n; i++){
        cout << a[t] << " ";
        t=(t+1)%(2*n);
        if(i == n-1){
            cout << endl;
        }
    }

}
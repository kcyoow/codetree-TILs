#include <iostream>

using namespace std;

int arr[2010][2010] = {0,};
int main(){
    int xy[2][4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cin >> xy[i][j];
            xy[i][j] += 1000;
        }
    }
    for(int t = 0; t < 2; t++){
        for(int i = xy[t][0]; i < xy[t][2]; i++){
            for(int j = xy[t][1]; j < xy[t][3]; j++){
                if(t == 0){
                    arr[i][j] = 1;
                }
                if(t == 1){
                    arr[i][j] = 0;
                }
            }
        }
    }
    int maxh = 0;
    int maxw = 0;
    int cnth = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); i++){
        int cntw = 0;
        for(int j = 0; j < sizeof(arr[i])/sizeof(*arr[i]); j++){
            if(arr[i][j] == 1){
                cntw++;
            }
        }
        if(cntw > 0){
            cnth++;
        }
        if(cntw > maxw) maxw=cntw;
    }
    maxh=cnth;
    cout << maxw*maxh;


}
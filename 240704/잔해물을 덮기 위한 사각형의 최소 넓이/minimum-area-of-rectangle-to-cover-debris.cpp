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
        for(int i = xy[t][0]; i <= xy[t][2]; i++){
            for(int j = xy[t][1]; j <= xy[t][3]; j++){
                if(t == 0){
                    arr[i][j] = 1;
                }
                if(t == 1){
                    arr[i][j] = 0;
                }
            }
        }
    }
    int maxx = 0;
    int maxy = 0;
    int minx = 1e6;
    int miny = 1e6;
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); i++){
        for(int j = 0; j < sizeof(arr[i])/sizeof(*arr[i]); j++){
            if(arr[i][j] == 1){
                if(j > maxx){
                    maxx = j;
                }
                if(j < minx){
                    minx = j;
                }
                if(i > maxy){
                    maxy = i;
                }
                if(i < miny){
                    miny = i;
                }
            }
        }
    }
    if(minx == 1e6){
        minx = 0;
    }
    if(miny == 1e6){
        miny = 0;
    }
    cout << (maxx-minx)*(maxy-miny);


}
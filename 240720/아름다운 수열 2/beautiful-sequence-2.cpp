#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N, M;
    vector<int> arrN, arrM;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        arrN.push_back(a);
    }
    for(int i = 0; i < M; i++){
        int a;
        cin >> a;
        arrM.push_back(a);
    }
    sort(arrM.begin(), arrM.end());
    int cnt = 0;
    for(int i = 0; i <= N-M; i++){
        vector<int> arr;
        for(int j = 0; j < 3; j++){
            arr.push_back(arrN[i+j]);
        }
        sort(arr.begin(), arr.end());
        cnt++;
        for(int j = 0; j < 3; j++){
            if(arr[j] != arrM[j]){
                cnt--;
                break;
            }
        }
    }
    cout << cnt;
}
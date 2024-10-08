#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    queue<vector<int> > q;
    for(int i = 1; i <= k; i++){
        vector<int> v;
        v.push_back(i);
        q.push(v);
    }
    while(!q.empty()){
        vector<int> v = q.front();
        q.pop();
        if(v.size() >= n){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << ' ';
            }
            cout << endl;
        } else{
            for(int i = 1; i <= k; i++){
                vector<int> v1 = v;
                v1.push_back(i);
                q.push(v1);
            }
        }
    }
}
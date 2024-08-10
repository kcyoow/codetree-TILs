#include <iostream>
#include <vector>
using namespace std;

int visited[1001];
vector<vector<int> > v(1001);
int k = 0;
int visiting(int start){
    visited[start] = 1;
    if(!v[start].empty()){
        for(int i = 0; i < v[start].size(); i++){
            if(!visited[v[start][i]]){
                return visiting(v[start][i]) + 1;
            }
        }
    }
    return 0;
}

int main(){
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int a, b;
        vector<int> v2;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << visiting(1);
}
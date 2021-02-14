#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

vector<int> v[101];
bool visited [101];

int bfs(int root){

    queue <int> q;
    q.push(root);
    visited[root] = true;
    int count = 0;

    while(!q.empty()){

        int index;
        index = q.front(); 
        q.pop();

        for(int i = 0 ; i < v[index].size() ; i++){
            if(!visited[v[index][i]]){
                count++;
                //cout<<v[index][i]<<" ";
                q.push(v[index][i]);
                visited[v[index][i]] = true;
            }
        }
    }

    return count;
    
}



int main(){

    int n,m;

    cin>>n>>m;

    for(int i = 0 ; i < m ; i++){
        int f,t;

        cin>>f>>t;

        v[f].push_back(t);
        v[t].push_back(f);
    }

    for(int i = 0 ; i < 101 ; i++){
        visited[i] = false;
    }

    int res;
    res = bfs(1);
    //cout<<endl;
    cout<<res<<endl;

    return 0;
}
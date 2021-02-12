#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector <int> v [1001];
bool visited[1001];

void bfs(int start){

    queue <int> q;

    q.push(start);

    while(q.size() > 0){


        int  temp = q.front();
        q.pop();

        if(!visited[temp]){
            visited[temp] = true;            
            cout<<temp<<" ";
        }
    
        for(int i = 0 ; i <v[temp].size();i++){
            if(!visited[v[temp][i]]) q.push(v[temp][i]);
        }
    }

}

void dfs(int n){


    visited[n] = true;
    cout<<n<<" ";

    
    for(int i = 0; i <v[n].size(); i++){
        if(!visited[v[n][i]])dfs(v[n][i]);
    }

    return;

}

void initVisited(){

    for(int i = 0 ; i < 1001;i++){
        visited[i] = false;
    }

}


int main(){

    int n,m,vi;

    cin>>n>>m>>vi;
    
    for(int i = 0 ; i <m ;i++){
        int j,k;
        cin>>j>>k;
        v[j].push_back(k);
        v[k].push_back(j);

    }

    for(int i = 1 ; i <= n ; i++){
        sort(v[i].begin(),v[i].end());
    }

    initVisited();
    dfs(vi);
    cout<<endl;
    initVisited();
    bfs(vi);

    return 0;
}




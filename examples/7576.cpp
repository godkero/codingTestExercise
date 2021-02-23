#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int arr[1001][1001];
bool visited[1001][1001];

int op[4][2] ={{1,0},{-1,0},{0,1},{0,-1}};

int bfs(int n,int m){
    
    queue <pair<int,int> > q;

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] == 1){
                pair<int,int> p = make_pair(i,j);
                q.push(p);
                visited[p.first][p.second] = true;
            }
        }
    }

    //0일차에 끝날경우를 위해
    int depth = -1;

    while(!q.empty()){
        int qSize = q.size();

        while(qSize > 0){

            pair<int,int> r = q.front();
            q.pop();
            
            for(int i = 0 ; i < 4 ;i ++){
                int x = r.first+op[i][0];
                int y = r.second+op[i][1];
                if(!visited[x][y] && arr[x][y] == 0 && x >= 0 && x < n && y >= 0 && y < m){
                    pair<int,int> temp = make_pair(x,y);
                    q.push(temp);
                    arr[x][y] = 1;
                    visited[x][y] = true;
                }
            }
            qSize--;
        }
        
        depth ++;
    }

    //cout<<"out p"<<endl;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j<m ;j++){
            if(arr[i][j] == 0 ){
                return -1;
            }
        }
    }

    return depth;
}


void init(int n,int m){
    
    int temp;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ;  j < m ; j++){
            cin>>temp;        
            arr[i][j] = temp; 
        }        
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ;  j < m ; j++){
            visited[i][j] = false;
        }
    }
    
}




int main(){

    int n,m,res;

    cin>>m>>n;

    init(n,m);

    res = bfs(n,m);
    
    cout<<res<<endl;

    return 0;
}
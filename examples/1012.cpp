#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[51][51];
bool visited[51][51];

int op [4][2] = {{1,0},{-1,0},{0,1},{0,-1}};


void init(){
    for(int i = 0 ; i < 51; i++){
        for(int j = 0 ; j < 51; j++){
            arr[i][j] = 0;
        }
    }
    for(int i = 0 ; i < 51; i++){
        for(int j = 0 ; j < 51; j++){
            visited[i][j] = false;
        }
    }


}


void bfs(int x,int y){

    
    queue <pair <int ,int> > q;
    q.push(make_pair(x,y));
    visited[x][y] = true;

    while(!q.empty()){

        pair <int,int> r = q.front();
        q.pop();
        //cout<<r.first<<","<<r.second<<"->";

        for(int i = 0; i< 4 ; i++){
            
            int xop = op[i][0];
            int yop = op[i][1];
            if(arr[r.first + xop][r.second + yop] == 1 && !visited[r.first + xop][r.second + yop]){

                 q.push(make_pair(r.first+xop,r.second+yop));
                 visited[r.first+xop][r.second+yop] = true;
             }
        }
    }
}

int bfs_(int x,int y){
    int count = 0;
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j <  y ; j++){
            if(arr[i][j] == 1 && !visited[i][j]){
                bfs(i,j);
                //cout<<endl;
                count++;
            }
        }
    } 
    return count;
}



int solve(int x,int y,int k){


    init();

    for(int i = 0 ; i < k ;i++){
        int xpos,ypos;
        cin>>xpos>>ypos;
        arr[xpos][ypos] = 1;
    }

    return bfs_(x,y);




}


int main(){

    int t;
    cin>>t;
    vector<int> ans;
    for(int i = 0 ; i < t; i++){
        int x,y,k;
        cin>>x>>y>>k;

        ans.push_back(solve(x,y,k));

    }

    for(int i = 0 ; i < ans.size();i ++){
        cout<<ans[i]<<endl;
    }


    return 0;
}
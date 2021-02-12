#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int findX,findY;


const int INF = 9999;
int pos[101][101];
bool visited[101][101];

queue <pair<int , int> > q;

int op [4][2]={{0,1,},{0,-1},{1,0},{-1,0}};

void bfs(int xpos,int ypos){


int depth = 1;

q.push(make_pair(xpos,ypos));

int queueSize = q.size();

while(!q.empty()){

    queueSize = q.size();


    while(queueSize > 0){
        pair<int , int> r  = q.front();
        
        queueSize--;   
        q.pop();

        if(visited[r.first][r.second])continue;
        visited[r.first][r.second] = true;

        if(r.first == findX-1 && r.second == findY-1){
            //cout<<"where answer at :";
            cout<<depth<<endl;
            return ;
        }


        for(int i = 0 ;i<4;i++){
            
            pair<int, int> temp = make_pair(r.first+op[i][1],r.second+op[i][0]);
            if(temp.first>= 0 && temp.first <findX && temp.second >= 0 && temp.second <findY && pos[temp.first][temp.second] == 1)
                q.push(temp);
            
                
            }
        }
        depth++;

    }  







    // if(visited[xpos][ypos])return INF;
    
    // if(xpos< 0 || xpos > findX || ypos < 0 || ypos > findY )
    //     return INF;

    // visited[xpos][ypos] = true;

    // if(pos[xpos][ypos] == 0)return INF;
    
    // if(xpos == findX-1 && ypos == findY -1)
    //     return 1;
    
    // else return INF;

    // while(xpos == findX-1 && ypos == findY -1){
    //     return min(min(min(min(min(min(min(dfs(xpos-1,ypos) ,dfs(xpos+1,ypos)), dfs(xpos-1,ypos-1)), dfs(xpos-1,ypos+1)),
    //             dfs(xpos+1,ypos-1)), dfs(xpos+1,ypos+1)), dfs(xpos,ypos-1)),dfs(xpos,ypos+1));
 
    // }    
}

void initVisited(){

    for(int i = 0 ; i < 101;i++){
        for(int j = 0 ; j< 101;j++){
            visited[i][j] = false;    
        }
    }

}

int main(){

    int x,y;
    string str;

    cin>>x>>y;

    findX = x;
    findY = y;
    

    for(int i = 0 ; i < x ; i++){
        cin>>str;
        for(int j = 0 ; j < y ; j++){
            if(str.at(j) == '1') pos[i][j] = 1;
            else pos[i][j] = 0;
        }
    }

    initVisited();


    //int answer = bfs(0,0);
    bfs(0,0);
    //cout<<answer<<endl;

    // cout<<"end of program"<<endl;


    return 0;
}


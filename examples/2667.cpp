#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

int n;
queue   <pair<int, int> > q;
vector<int> v;


int arr[26][26];
bool visited[26][26];

int op[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};



int bfs(int i,int j){

    int count = 0;
    
    q.push(make_pair(i,j));
    
    while(!q.empty()){

        pair<int, int> r = q.front();
        q.pop();

        if(!visited[r.first][r.second]){
            visited[r.first][r.second] = true;

            count ++;
        }
        else continue;

        for(int k = 0 ; k < 4 ; k++){
            
            pair<int, int> temp = make_pair(r.first+op[k][0],r.second+op[k][1]);
            if(temp.first >= 0 &&temp.first <25 && temp.second >= 0 && temp.second < 25 && arr[temp.first][temp.second] == 1)
                q.push(temp);
        }
    }
    return count;   
}

void bfs_(){


    for(int i = 0 ; i < 25; i++){
        for(int j = 0 ; j < 25 ; j++){
            if(arr[i][j] == 1 && !visited[i][j]){
                v.push_back (bfs(i,j));
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i = 0 ; i <v.size();i++){
        cout<<v[i]<<endl;
    }
}




void init_visit(){
    for(int i = 0 ; i < 25; i ++){
        for(int j = 0 ; j <25 ; j ++){
            visited[i][j] = false;
        }
    }
}

void init_arr(){
    string str;

    cin>>n;
    for(int i = 0 ; i <n ; i++ ){
        cin>>str;
        for(int j = 0 ;j <n;j++){
            
            if(str.at(j)=='1')arr[i][j] = 1 ;
            else arr[i][j] = 0;
        }
    }


}


int main(){

    init_arr();

    init_visit();

    bfs_();

    return 0;

}
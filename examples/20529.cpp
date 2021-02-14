#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;

int criteria [100001][4];


int dist(string * a,string * b){

    int count = 0 ;

    for(int i = 0 ; i < 4;  i++){
        if( a->at(i)!= b->at(i)){
            count++;
        }
            
    }
    return count;
}

int distThree(string *a,string *b,string *c){
    return dist(a,b)+dist(b,c)+dist(c,a);
}



int solve(int n){

    if(n > 4096)return 0;

    int ans; 

    //E,I
    //S,N
    //T,F
    //J,P

    vector <string> v;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin>>str;
        v.push_back(str);
    }
    
    int min_ = 9999;

    int vSize = v.size();

    for(int i = 0 ; i < vSize - 2 ; i++){
        for(int j = i + 1 ; j < vSize -1 ; j++){
            for(int k = j + 1 ; k < vSize ; k++){
                if(i!=j&&j!=k&&k!=i){
                    min_ = min(distThree(&v[i],&v[j],&v[k]),min_);
                    if(min_ == 0 )return 0;
                }
            }
        }
    }

    ans = min_;

    return ans;
}


int main(){

    int T,N;
    int ans;
    cin >>T;

    vector<int> res;
    for(int i = 0 ; i < T;i++){
        cin>>N;
        res.push_back(solve(N));
    }

    for(int i = 0 ; i< res.size();i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
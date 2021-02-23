#include <iostream>
#include <vector>


using namespace std;



bool compare ( pair<int,int> a , pair<int, int> b){

    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
    
}

int dist[201][201];

int main(){

    int n,m;

    vector <pair <int, int> > v;

    cin>>n >> m;

    int curLevel = 0;
    int spanTime = m;

    for(int i = 0; i < n; i++)
    {
        int level,take;
        cin>>level>>take;
        pair<int,int> r = make_pair(level,take);
        v.push_back(r);
    }

    sort(v.begin(),v.end(),compare);

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j++){
            int dis;
            cin>>dis;
            dist[i][j]  = dis;
        }
    }
    
    while(spanTime <= 0){

        

    }

    return 0;

}
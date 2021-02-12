#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n,m;

    cin>>n>>m;

    int max = m;

    vector<int> v;

    for(int i =0 ; i<n;i++){
        int temp ;
        cin>>temp;
        v.push_back(temp);
    }


    sort(v.begin(),v.end());

    int temp = 0 ;

    for(int i = 0; i < v.size() - 2 ; i ++){
        for(int j = i + 1; j < v.size() - 1; j ++){
            for(int k = j + 1; k < v.size(); k ++)
                if( max >= v[i]+v[j]+v[k]){
                    if(i!=j && j!=k && j!=i){
                        if(temp < v[i]+v[j]+v[k]) temp =v[i]+v[j]+v[k];
                }
                else break;
                }
        }

    }

    cout<<temp<<endl;

    return 0;
}
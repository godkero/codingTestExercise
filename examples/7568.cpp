#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int n ;

struct personel{
    int weight;
    int tall;
    int index = 0;    
};


int main(){

    cin>>n;

    personel pers[n];

    for(int i = 0 ; i < n ; i++){
        
        int weight,tall;
        
        cin>>weight>>tall;

        pers[i].weight = weight;
        pers[i].tall = tall;
        pers[i].index = i ;
    }

    int temp_weight =201, temp_tall = 201;
    int rank =0;
    int waiting = 0 ;
    
    for(int i = 0 ; i< v.size() ; i ++){
        
        if(v[i].first < temp.first &&v[i].second < temp.second){
            rank = rank + waiting + 1;    
            waiting = 0;
        }
        else
            waiting ++;
        
        cout<<rank<<endl;

        temp.first = v[i].first;
        temp.second = v[i].second;
    }

    return 0;
}
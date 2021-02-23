#include <iostream>
#include <vector>

using namespace std;


//9 2
//3 2 5 5 6 4 4 5 7


int arr[200001];


int max(int a,int b){
    if(a>b)return a;
    return b;
}


int main(){

    cin.tie(NULL);
    std:ios::sync_with_stdio(false);

    int n,k;
    //배열 초기화
    for(int i = 0 ; i < 200001;i++){
        arr[i] = 0;
    }

    cin>>n>>k;

    vector<int> v;
    //입력
    for(int i = 0; i < n ; i++){
        int num ;
        cin>>num;
        v.push_back(num);
    }


    int len = 0,maxLen = 0;
    int posIndex = 0;
    
    for(int i = 0; i < v.size();i++){
        
        arr[v[i]]++;
        
        if(k < arr[v[i]]){
            maxLen = max(len,maxLen);
            
            while(k < arr[v[i]]){
                arr[v[posIndex]]--;
                //cout<<v[posIndex]<<"out"<<endl;
                posIndex++;
                len--;
            }
        } 
        
        len++;
        
    }
    maxLen = max(len,maxLen);

    cout<<maxLen<<"\n";

    return 0;
}
#include <iostream>

using namespace std;

bool visited[10001];


int d(int n){

    int result = n;

    while(n != 0) {
        result += n%10;
        n = n/10;
    }
    return result;
}


int main(){

    for(int i = 0 ; i < 10001 ;i++){
        visited[i] = false;
    }

    //cout<<"1st"<<endl;

    for(int i = 0 ; i < 10000 ;i++){
        int temp = d(i);
        visited[temp] = true;
    }        
    
    //cout<<"2ed"<<endl;


    for(int i = 0 ; i< 10000;i++){
        if(visited[i] == false) cout<<i<<endl;
    }

    //cout<<"3rd"<<endl;

    return 0;

}
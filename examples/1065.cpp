#include <iostream>

using namespace std;

int main(){

    int n;

    cin>>n;
    
    if(n < 100) cout<<n;
    else if(n == 1000){
        cout<<144;   
    }
    else {
        int key = 100;
        int count = 99;
        while(!(n < key)){
            if(key%10-(key/10)%10 == (key/10)%10 - (key/100)%10){
                count++;
            }
            key++;
        }
        cout<<count<<endl;
    }

    return 0;

}
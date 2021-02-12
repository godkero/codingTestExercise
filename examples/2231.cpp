#include <iostream>

using namespace std;

int main(){

    int n ; 

    cin>>n ; 

    int value = n ;
    ///123 -> 123+1+2+3

    int depth = 0 ;

    while(n != 0 ){

        n = n/10;
        depth++;
    }

    int temp = 0;
    int ans = 0;

    while(value >= ans){
        
        temp = ans; 
        
        int digit = ans;
        while( digit> 0){
            temp += digit % 10;
            digit = digit / 10;
        }

        if(value == temp){
            cout<<ans<<endl;
            return 0;
        }
            


        ans++;
    }
    cout<<0<<endl;

    return 0;

}
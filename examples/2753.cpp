#include <iostream>
using namespace std;

int main(){

    int check;
    cin>>check;

    if(check % 4 == 0 && check % 100 != 0 || check %400 ==0 ){
        cout<<1;return 0 ;
    }
    cout<<0;

    return 0;
}
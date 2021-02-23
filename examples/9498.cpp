#include<iostream>
using namespace std;

int main(){

    int m;

    cin>>m;

    if(m>=90)cout<<"A";
    else if(m>=80)cout<<"B";
    else if(m>=70)cout<<"C";
    else if(m>=60)cout<<"D";
    else cout<<"F";

    return 0 ;
}
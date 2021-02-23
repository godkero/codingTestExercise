#include <iostream>
using namespace std;

int main(){

    int A,B;
    cin>>A>>B;
    int sum = 0;
    int value =1 ;
    while(true){
        int temp = B%10;
        B = B / 10;

        cout<<temp * A <<endl;
        sum += temp * A *value;
        value *= 10;
        if(B == 0)break;
    }
    cout<<sum<<endl;
    return 0;
}
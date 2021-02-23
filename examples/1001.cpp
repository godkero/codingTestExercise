#include <iostream>

using namespace std;

int main(){

    cout << fixed;
    cout.precision(8);


    int a,b;
    cin>>a>>b;
    cout<<(double)a/(double)b<<endl;
    return 0;
}
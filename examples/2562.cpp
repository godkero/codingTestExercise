#include <iostream>

using namespace std;;

int main(){
    int temp;
    int max = -1;
    int maxIndex = 0;
    for(int i = 0 ; i < 9 ; i++){
        cin>>temp;
        if(max < temp){
            max = temp;
            maxIndex = i+1;
        }
    }
    cout<<max<<endl;
    cout<<maxIndex<<endl;

    return 0;

}
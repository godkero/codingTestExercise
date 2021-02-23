#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int n,k;

    cin>>n>>k;

    int arr[n];

    int num = (n-1);
    int index = 0;
    
    //초기화
    for(int i = 0 ; i < n ; i ++){
        arr[i] = 0 ;
    }

    while(k > 0){
        //k>n일때 최대값
        if(k >= num){
            arr[index] = (num+1);        
            k = k - num;
            num--;
            index++;
        }

        //남은 n이 k보다 작을 떄,
        else {
            while(((n-1) - index ) != k)index++;
            arr[index] = (num+1);
            k = 0;
        }
    }

    int value = 1;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==0)arr[i]=value++;
        cout<<arr[i]<<" ";
    }

    return 0;
}
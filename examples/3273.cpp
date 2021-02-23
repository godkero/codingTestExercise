#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n,res,count = 0;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>res;

    int start = 0 ,end = 0;

    while(start <= end){
        if(arr[start] + arr[end] >= res || end == n -1){
            start++;
        }
        else {
            end++;
        }
        if(arr[start] + arr[end] == res){
            count++;
        }
    }
    cout<<count<<endl;


}
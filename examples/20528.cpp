#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){

    int n ;
    vector <string> v;

    cin>>n;
    for(int i = 0 ; i< n ; i++){
        string str;
        cin>>str;
        
        v.push_back(str);
    }

    bool isTrue = true;
    char key = v[0].front();


    for(int i = 0 ;i < v.size();i++){
        if(v[i].front() != v[i].back() || key != v[i].front()){
            isTrue = false;
            break;
        }
    }

    if(isTrue){
        cout<<1;
        return 0;
    }
    cout<<0;
    return 0;



}
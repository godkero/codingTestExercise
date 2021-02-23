#include <iostream>
#include <vector>

using namespace std;

int findMul(){


    int a,b;
    int l = 2;
    vector<int> mem[2];

    cin>>a>>b;

    while(a > 1 ){
        if(a%l==0){
            a = a/l;
            mem[0].push_back(l);
        }
        else l++;
    }
    l = 2;
    while(b > 1 ){
        if(b%l==0){
            b = b/l;
            mem[1].push_back(l);
        }
        else l++;
    }

    int apos = 0 ,bpos = 0 ;
    int result = 1;

    while(apos+1 !=mem[0].size() && bpos+1 != mem[1].size()){
        if(mem[0][apos] > mem[1][bpos]){
            
            result*=mem[1][bpos];
            bpos++;
            
        }
        else if(mem[0][apos] > mem[1][bpos]){
            result*=mem[0][apos];
            apos++;
            
        }
        else {
            result*=mem[0][apos];
            apos++;
            bpos++;
        }
    }
    return result;
}


int main(){


    vector<int> v;
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++){
        v.push_back(findMul());
    }

    for(int i = 0 ; i < v.size() ; i ++){

        cout<<v[i]<<endl;
    }

    return 0;
}
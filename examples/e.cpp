#include <iostream>
#include <vector>

using namespace std;

int distArr[100001][2];

int main(){

    int n,dist;

    cin>>n>>dist;

    for(int i = 0 ; i <n ;i++){
        int a;
        cin>>a;
        distArr[i][0] = a;
    }
    for(int i = 0 ; i <n ;i++){
        int a;
        cin>>a;
        distArr[i][1] = a;
    }
    

    int maxTravel = distArr[0][0] + distArr[0][1];

    int preIndex = 0, count = 0;
    int maxDist = 0;

    //경유지 전체 순회
    for(int i = 1; i< n;i++){
        //환승조건
        if(maxTravel  < distArr[i][0] || (i+1 == n &&maxTravel < dist)){
            int temp = i;
            if(maxTravel <distArr[i][0]){
                 temp = temp -1;
            }
            
            while(preIndex <= temp){

                maxDist = max(maxDist,distArr[preIndex][0] + distArr[preIndex][1]);
                preIndex++;
            }
            maxTravel = maxDist;
            count++;
        }

    }

    //cout<<maxTravel<<endl;


    if(maxTravel >= dist){
        cout<<count<<endl;
    }
    else cout<<-1<<endl;

    return 0;
}
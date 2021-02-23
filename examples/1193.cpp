#include <iostream>
#include <vector>

using namespace std;

//1+2+3+4+5+6+7+.....

int main(){

    int x;
    //총 이동하는 거리
    cin>>x;

    //key : x와 비교
    //minus : x 의 order 
    int key,minus = 0;

    while(x > key){
        minus++;
        key += minus;
    }
    key -= minus;

    cout<<minus<<endl;

    //x,y위치 분기점
    int pos = x - key ;
    cout<<pos<<endl;
    bool startTop;
    if(minus % 2 == 0)startTop = true;
    else startTop = false;

    int xpos;
    int ypos;

    if(startTop){
        xpos = pos - (minus-1);
        ypos = minus;
    }
    else{
        xpos = minus;
        ypos = pos - (minus-1);
    }

    cout<<xpos<<"/"<<ypos<<endl;

    return 0;
}
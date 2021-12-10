#include <iostream>

using namespace std;

int main(){

	int a,b,c,i;
	cin>>a>>b>>c;
	i = 0;
	while(a+(i*b)>=c*i){

		i++;
	}

	cout<<i<<endl;

	return 0;
}


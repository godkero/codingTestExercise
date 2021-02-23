// #include <iostream>

// using namespace std;

// int main(){

//     int x1,y1,r1,x2,y2,r2,T;

//     cin>>T;

//     for(int i = 0 ; i < T ; i++){
//         //range calculate
//         cin>>x1>>y1>>r1>>x2>>y2>>r2;

//         int pointDist = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
//         int roundSum = (r1+r2)*(r1+r2);
//         int roundSub = (r1-r2)*(r1-r2);
        
//         //case 1 : 
//         if(x1 == x2 && y1 == y2 && r1 == r2){
//             cout<<-1<<endl;
//         }
//         //case 2 : 
//         else if(roundSum > pointDist){
//                 cout<< 0 <<endl;
//         }
//         //case 3:
//         else if(roundSum == pointDist){
//             cout<< 1 <<endl;
//         }
//         //case 4:
//         else if(roundSum < pointDist){
//             if(pointDist > roundSub ){
//                 cout<< 2 <<endl;
//             }
//             else if(pointDist == roundSub){
//                 cout<< 1 <<endl;
//             }
//             else if(pointDist < roundSub){
//                 cout << 0 <<endl;
//             }
//         }
//     }

//     return 0;

// }

#include <iostream>
using namespace std;


int x, y, r1, x2, y2, r2;
int dist() {
	return (x - x2)*(x - x2) + (y - y2)*(y - y2);
}
int sq(int x) {
	return x * x;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> x >> y >> r1 >> x2 >> y2 >> r2;

		if (r1 == r2 && x == x2 && y == y2)
			cout << -1;
		else if (dist() > sq(r1 + r2))
			cout << 0;
		else if (dist() == sq(r1 + r2))
			cout << 1;
		else if (dist() < sq(r1 + r2)) {
			if (dist() > sq(r2 - r1))
				cout << 2;
			else if (dist() == sq(r2 - r1))
				cout << 1;
			else if (dist() < sq(r2 - r1))
				cout << 0;
		}
		cout << '\n';
	}
}
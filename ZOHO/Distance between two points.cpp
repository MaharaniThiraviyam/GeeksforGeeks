#include <iostream>
#include<math.h>
using namespace std;

int main() {
	//code
	int x1, y1, x2, y2, gdistance,t,i;
	cin>>t;
	for(i=0;i<t;i++){
	cin>>x1>>y1>>x2>>y2;
	gdistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    cout<<round(sqrt(gdistance))<<"\n";
	}
	return 0;
	
}

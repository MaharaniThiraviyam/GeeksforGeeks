#include <iostream>
using namespace std;

int main() {
	//code
	int t,z,i,sum,num;
 cin>>t;
 for(z=0;z<t;z++){
 cin>>num;
 for(i=num,sum=0;i>0;i/=10){
    num=i%10;
    if((num==2)||(num==3)||(num==5)||(num==7))
     sum+=num;
    }
 cout<<sum<<"\n";
 }
	return 0;
}

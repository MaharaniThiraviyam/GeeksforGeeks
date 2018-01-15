#include <iostream>
using namespace std;

int main() {
	//code
		int num,n,sum,t,i;
 cin>>t;
 for(i=0;i<t;i++){
  cin>>num;

   n=num;
   for(sum=0;n>0;n/=10)
    sum=sum*10+(n%10);
    num+=sum;

    n=num;
    for(sum=0;n>0;n/=10)
    sum=sum*10+(n%10);
    if(num==sum)
        cout<<num<<"\n";
    else
        cout<<"-1\n";
 }
 return 0;
	
}

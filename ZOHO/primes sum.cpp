#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,i,j,flg1=0,flg2=0,flg3=0,z;
 cin>>t;
 for(z=0;z<t;z++){
  cin>>n;
      flg1=1;flg2=1;flg3=0;
       for(i=3; i<=n/2; i++){
      for(j=2; j<i; j++){

         if(i%j==0)
           { flg1=0;j=i;}
        }
      for(j=2; j<n-i; j++)
       {
         if((n-i)%j==0){
        flg2=0;j=n-i;
        }
       }
         if(flg1==1 && flg2==1)
                   flg3=1;
    }
     if(flg3==0)
        cout<<"No \n";
     else
        cout<<"Yes \n";
  }

 
	return 0;
}

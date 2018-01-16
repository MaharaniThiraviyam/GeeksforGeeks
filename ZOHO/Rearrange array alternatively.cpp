#include <iostream>
using namespace std;

int main() {
	//code

 int n,a[100],temp,i,j,big,index,z,t;
 cin>>t;
 for(z=0;z<t;z++){
  cin>>n;
  for(i=1;i<=n;i++)
    cin>>a[i];
  for(i=n/2;i>=1;i--){
    temp=a[i];
    a[i]=a[i*2];
    a[i*2]=temp;
  }
  for(j=1;j<=n;j=j+2){
  for(i=j,big=0;i<=n;i=i+2){
    if(a[i]>big){
        big=a[i];
        index=i;
  }
  }
  temp=a[j];
  a[j]=a[index];
  a[index]=temp;
  // cout<<"big="<<big<<" ";
  }
  for(i=1;i<=n;i++)
     cout<<a[i]<<" ";
     cout<<"\n";
 }
	return 0;
}

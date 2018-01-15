#include <iostream>
using namespace std;

int main() {
	//code
	int a[500],n,k,t,i,sum,z;
 cin>>t;
 for(z=0;z<t;z++){
  cin>>n>>k;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0,sum=0;i<n;i++){
    if(a[i]%k==0)
     sum+=(a[i]/k);
    else
      sum+=((a[i]/k)+1);


  }
  cout<<sum<<"\n";
 }
	return 0;
}

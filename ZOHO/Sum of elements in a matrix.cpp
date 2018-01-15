#include <iostream>
using namespace std;

int main() {
	//code
	int t,n,m,sum,a[10][10],i,j,z;
  cin>>t;
  for(z=0;z<t;z++){
  cin>>n>>m;
   for(i=0;i<n;i++)
     for(j=0;j<m;j++)
      cin>>a[i][j];
      for(i=0,sum=0;i<n;i++)
        for(j=0;j<m;j++)
          sum+=a[i][j];
  cout<<sum<<"\n";
  }
	return 0;
}

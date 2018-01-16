#include <iostream>
using namespace std;

int main() {
	//code
	 int t,n,m,i,j,a1[50000],a2[50000],a3[50000],z,w;
  cin>>t;
  for(w=0;w<t;w++){
  cin>>n>>m;
  for(i=0;i<n;i++)
     cin>>a1[i];


   for(j=0;j<m;j++)
   cin>>a2[j];

   for(i=0,j=0,z=0;(i<n&&j<m);z++){

     if((a1[i]>a2[j])&&(i<n)){
        a3[z]=a1[i];
         i++;
    }
     else if((a1[i]<a2[j])&&(j<m)){
        a3[z]=a2[j];
        j++;
     }

   }
    for(;(i==n)&&(j<m);z++,j++)
       a3[z]=a2[j];

     for(;(j==m)&&(i<n);z++,i++)
      a3[z]=a1[i];



  for(i=0;i<z;i++)
     cout<<a3[i]<<" ";
}

	return 0;
}

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//code
	char s[50];int n,i,j,z,k,t,w;
cin>>t;
for(w=0;w<t;w++){

cin>>s;
n=strlen(s);

for(i=0,z=n-1;i<n;i++,z--){
 for(j=0;j<n;j++){
    if(i==j)
      cout<<s[i];
    else if(j==z)
        cout<<s[z];
    else
      cout<<" ";
   }
      cout<<"\n";
 }
}

	return 0;
}

#include<iostream>
using namespace std;
int main(){
	 string str;
	 int i,count,rem,k,n,mul,t,z;
	 char ch;
	 cin>>t;
	 
	 for(z=0;z<t;z++){
	  cin>>str>>k>>n;
	  cin>>ch;
	  
	   count=0;
	  for(i=0;i<str.size();i++){
	  	if(str[i]==ch)
	  	 count++;
	  	 }
       
       mul=n/str.size();
       mul*=count;
       rem=(n%str.size());
       
        for(i=0,count=0;i<rem;i++){
	  	if(str[i]==ch)
	  	   count++;
	  	 }
        cout<<mul+count<<"\n";
        }
	          return 0;
	  }
	  

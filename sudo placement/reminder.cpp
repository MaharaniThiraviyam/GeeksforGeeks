#include<iostream>
using namespace std;
 int main(){
 	string str;
 	int t,i,val,j,mul,num;
 	 cin>>t;
 	for(j=0;j<t;j++){
 	 	cin>>str;
     mul=1;
 	if(str.size()==3)
 	 mul=100;
 	else if(str.size()==2)
 	 mul=10;
 	
 	for(i=0,num=0;i<str.size();i++,mul/=10){
 		val=str[i]-48;
 	    num=num+(val*mul);
 	    
 		
	 }
	 cout<<"\n num="<<num;
	 cout<<num%7<<"\n";
	 
}
	 return 0;
 	
 }

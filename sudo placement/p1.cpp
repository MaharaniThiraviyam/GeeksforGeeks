#include<iostream>
using namespace std;
 int main(){
 	string str1,str2;
 	int i,j,flag,indexj,t,z;
 	
 	cin>>t;
 	for(z=0;z<t;z++){	 
 	 cin>>str1>>str2;
 	 
 	 for(i=0,flag=0;str1[i]!='\0';i++){
 	 	
 	 	for(j=0;str2[j]!='\0';j++){
 	 		if(str1[i]==str2[j]){
 	 			flag=1;
 	 			indexj=j;
 	 			break;
			  }
 	 		
		  }
 	 	if(flag==1)
 	 	 break;
	  }
	  
	  cout<<j<<" ";
	  
	  for(j=indexj;str1[i]==str2[j] && str1[i]!='\0';i++,j++)
	    cout<<str2[j];
	    cout<<"\n";
}
	    return 0;
 	
 }

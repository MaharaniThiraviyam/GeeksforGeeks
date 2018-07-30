#include<iostream>
using namespace std;
int main(){
 int t,num,z,i,input,value,j;
  cin>>t;
  for(j=0;j<t;j++){
   cin>>num;

  int st[num];

  for(i=0,z=-1;i<num;i++){
   cin>>input;

   if(input==1){
    cin>>value;
    st[++z]=value;
  }

  else if(input==2){
    z--;
  }

  else if(input==3){
    if(z==-1)
     cout<<z<<"\n";
    else
     cout<<st[z]<<"\n";
  }

   }
  }
return 0;
}

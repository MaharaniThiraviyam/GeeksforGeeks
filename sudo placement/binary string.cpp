#include <iostream>
using namespace std;

int main() {
	 string str;
   int i,j,index1,index2,z,count,t,y,num;

   cin>>t;

   for(y=0;y<t;y++){
    cin>>num>>str;

    for(i=0,count=0;i<num;i++){

      if(str[i]=='1'){
        index1=i;

        for(j=i+1;j<num;j++){
         if(str[j]=='1'){
          index2=j;

          count++;
             }


         }


        }



      }

  cout<<count<<"\n";
   }
    return 0;

	
}

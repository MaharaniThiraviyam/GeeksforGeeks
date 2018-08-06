#include<iostream>
using namespace std;
 int main(){
  int num,i,r,index;

   cin>>num>>r;

    int arr[num];

   //left shift
   for(i=0;i<num;i++){

    if(i-r>=0)
     index=i-r;

    else{
     index=r-i;
     index%=num;
     index=(num-index)%5;
     }
     cin>>arr[index];
     //cout<<"\n index="<<index;
   }


   for(i=0;i<num;i++)
     cout<<arr[i]<<" ";

   cout<<"\n";
   //right shift

   for(i=0;i<num;i++){
     index=(i+r)%num;
     cin>>arr[index];
   }

   for(i=0;i<num;i++)
    cout<<arr[i]<<" ";

  return 0;

 }

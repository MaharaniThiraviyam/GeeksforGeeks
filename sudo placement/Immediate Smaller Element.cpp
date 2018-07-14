#include <iostream>
using namespace std;

int main() {
	int t,i,j,num;
	 cin>>t;
	 for(i=0;i<t;i++){
	     cin>>num;
	     int arr[num];
	      cin>>arr[0];
	      for(j=0;j<num-1;j++){
	           cin>>arr[j+1];
	          if(arr[j]>arr[j+1])
	           cout<<arr[j+1]<<" ";
	         else
	           cout<<"-1 ";
	      }
	     cout<<"-1\n";
	 }
	return 0;
}

#include<iostream>
using namespace std;
 int main(){
  string str;int i,sum=0;float avg=0.0;
   cin>>str;

   for(i=0;i<str.size();i++)
     sum+=str[i];
   cout<<(float)sum/str.size();
   return 0;

 }

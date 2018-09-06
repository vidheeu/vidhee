// to print hollow right triangle 
#include<iostream>
using namespace std;
int main()
  {int n=10;
  for(int i=0;i< n;i++)
  if ( i==0 || i==1  || i==n-1)
  {for (int j=0 ;j< (i+1);j++)
{cout<<"*";}
{cout<<endl;}}
 else{ cout<<"*";
 for(int j=0;j< (i-1);j++)
 {cout<<" ";} 

 cout<<"*";
 cout<<endl;}
 return 0;
 }

#include<iostream>
using namespace std;
int min(int a,int b){
   if (a<b)
   return a;
   else if (a==b)
   cout<<"both are equal"<<endl;
   else(a>b);
   return b;}
//use void
void min(int a,int b, int &c){
     cout<<min(a,b);}
//define the driver function
int main(){
   int a,b;{
   cout<<"input first no.";
   cin>>a;
   cout<<"input second no.";
   cin>>b;
   cout<<min(a,b)<<endl;
   }
return 0;}

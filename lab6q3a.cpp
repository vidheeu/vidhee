//include library
#include<iostream>
//add namespace
using namespace std;
//define your own function
int max(int p,int q){
    if (p>q)
    {return p;}
     else if (p==q)
    {cout<<"both numbers are equal"<<endl;}
    else (p<q);
    {return q;}
return 0;}
   
//define the driver function
int main(){
    int p,q;
    cout<<"enter first number";
    cin>>p;
    cout<<"enter second number";
    cin>>q;
    cout<<max(p,q)<<endl;
return 0;
}

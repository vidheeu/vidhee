//sum
//program with afunction that takes two int parameters adds them together then returns the sum.
// shud ask the user for two numbers then call the function with the no.s as arguments and tell the user the sum
#include<iostream>
using namespace std;
// declare the function   
   int addition(int a,int b)
   {int sum= a+b;
    return sum;}
    

//main function
    int main(){
int a,b;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
      //running the function
     cout<< addition(a,b);
return 0;
}   


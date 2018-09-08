//write a program with a function that takes two int parameters,adds them together,then returns the minimum. the program should ask the user for two numbers then call the function with the no.s as arguments.
#include<iostream>
using namespace std;
// declare the function   
   int minimum(int a,int b)
   {if (a<b)
     return a;
    else
    
    return b ;}
    

//main function
    int main(){
int a,b;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
      //running the function
     cout<< minimum(a,b);
return 0;
}   


//write a program with a function that takes two int parameters,adds them together,then returns the maximum. the program should ask the user for two numbers then call the function with the no.s as arguments.
#include<iostream>
using namespace std;
// declare the function   
   int maximum(int a,int b)
   {if (a<b)
     return b;
    else
    
    return a ;}
    

//main function
    int main(){
int a,b;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
      //running the function
     cout<< maximum(a,b);
return 0;
}   


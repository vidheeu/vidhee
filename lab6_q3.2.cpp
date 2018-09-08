////write a program with a function that takes two int parameters,adds them together,then returns the maximum. the program should ask the user for two numbers then call the function with the no.s as arguments.
//the function adds the numbers shud be void and takes a third pass by reference parameter then puts the maximum in that
#include<iostream>
using namespace std;
// declare the function   
   void maximum(int a,int b,int &max)
   { if (a<b)
     max=b;
    else
    
    max=a ;}
    

//main function
    int main(){
int a,b,bigger;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
      //running the function
      maximum(a,b,bigger);
      cout<<bigger; 
return 0;
}   

////write a program with a function that takes two int parameters,adds them together,then returns the minimum. the program should ask the user for two numbers then call the function with the no.s as arguments.
//the function adds the numbers shud be void and takes a third pass by reference parameter then puts the miniimum in that
#include<iostream>
using namespace std;
// declare the function   
   void miniimum(int a,int b,int &min)
   { if (a<b)
     min=a;
    else
    
    min=b ;}
    

//main function
    int main(){
int a,b,smaller;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
      //running the function
      miniimum(a,b,smaller);
      cout<<smaller; 
return 0;
}   

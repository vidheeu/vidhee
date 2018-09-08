//program with afunction that takes two int parameters adds them together then returns the sum.
// shud ask the user for two numbers then call the function with the no.s as arguments and tell the user the sum
//function adds the numbers shud be void and takes athird pass by reference parameter then puts the sum in that
#include<iostream>
using namespace std;
// declare the function   
   void addition(int a,int b,int &c)
   { c= a+b;
    }
    

//main function
    int main(){
int a,b,sum;     //taking the variables
     cout<<"take two no.s";
     cin>>a;
     cin>>b;
     
      //running the function
     addition(a,b,sum);
      cout<< sum;
      return 0;
}   


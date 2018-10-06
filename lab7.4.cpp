//to find sum of all natural no.s using recursion// 
#include<iostream>
using namespace std;
/* This is function declaration, 
 */
int sum(int n);
int main(){
   int n;
   cout<<"Enter the value of n(should be positive integer): "; 
   cin>>n;
   /* Here we are checking whether the entered value of n is 
    * natural number or not. 
    */  
   if(n<=0){
      cout<<"The entered value of n is invalid"; 
   } 
   else{ 
      cout<<"Sum of n natural numbers is:  "<<sum(n); 
   }
   return 0;
}
int sum(int n){ 
   /* We are calling sum function recursively until the value
    
   if(n!= 0) {   
      return n + sum(n-1); 
   } 
   return 0;
}

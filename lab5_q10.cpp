//to print odd numbers between 1 to 100 using while loop
// to calculate sum of i to n even no.s
#include<iostream>
using namespace std;
int main(){
  int i=1;
  // a loop from 1 to 100//
  while (i<=100){
  // if number is divisible by 2//
  if ((i+1)%2==0){
  cout<< i << " ";}
  i++;}
  return 0;
  }

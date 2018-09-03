//to input basic salary of an employee and calculate its gross salary according to following
#include<iostream>
using namespace std;
int main()
  {//declaring the variables
  float basic ,gross,hra,da;
  //input basic salary of employee
  cout<<"enter the basic salary;";
  cin>> basic;
  if(basic<=10000)
  {
  da=basic*0.8;
  hra=basic*0.2;
  }
  else if (basic<=20000)
  {
   da=basic*0.9;
   hra=basic*0.25;
  }
  else 
  {
  da =basic*0.95;
  hra=basic*0.3;}
  //calculate toal//
  gross = basic+hra+da;
  cout<<"gross salary"<<gross;
  return 0;
  }

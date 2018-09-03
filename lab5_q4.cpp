//to  input all angles of triangle and check whether it is valid or not
#include<iostream>
using namespace std;
int main()
  {
  //declaring the variables
  float A,B,C,sum;
  //putting the angles
  cout<<"enter the angles:";
   cin>> A>> B>> C;
   sum = A+B+C;
 if(sum==180)
  {cout<<"triangle is valid";
}  
  else 
  {cout<<"triangle is invalid";
}
  return 0;
}


  

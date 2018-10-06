//to find power of any number using recursion//
#include <iostream>
using namespace std;
//function declared 
int calculatepower(int,int);
//main funtion
 
int main()
{
    int a, b,result;
 //input base number
 cout<<"enter base number";
 cin>>a;
 //input power
 cout<<"enter power number(positive integer)";
 cin>>b;
//write the result
 result=calculatepower(a,b);
 cout<< a << "^"<< b << "="<<result; 
 return 0;
}
  int calculatepower(int a,int b)
{
   if (b == 0)
     return(a*calculatepower(a, b-1));
   else
     return 1;
  }

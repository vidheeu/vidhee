//to generate nth fibonacci term using recursion
#include<iostream>
using namespace std;
  int fibonacci(int n)
  {
    if ((n==1)||(n==0))
    {
     return(n);
    }
    else
    {
    return (fibonacci(n-1)+fibonacci(n));
    } 
    }
    int main()
    {
      int n,i=0;
      cout<<"input the number of terms for   ";
      cin>>n; 
      cout<<"fibonacci series is";
      
      while(i< n)   
      {
          cout<<"  "<<fibonacci(i);
          i++;
      }
      return 0;
      }      

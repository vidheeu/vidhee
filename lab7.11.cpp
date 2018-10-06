//to find HCF of two no. using recursin
#include<iostream>
using namespace std;
  //declara tthe recursive function
  int hcf(int n1, int n2);
  int   main()
 {  
  int n1,n2;
  cout<<"enter two positive integers";
  cin>>n1>>n2;
  cout<<"h.c.F of"<<n1<<"&"<<n2<<"is";
  return 0;  
  }
  // recursive function used
  int hcf ( int n1,int n2)
  {
  if(n2!=0)
      return hcf(n2,n1 % n2);
  else
       return n1;
}  

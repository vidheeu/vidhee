//to calculate sum of all  n natural no.s
#include<iostream>
using namespace std;
int main() {
  int n,sum = 0;
  cout<<"enter a positive integer";
  cin >> n ;
  for(int i=1;i <= n; ++i)
  sum += i;
  }
  cout<<"Sum ="<< sum;
  return 0;
  }

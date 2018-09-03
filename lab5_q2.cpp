//tocheck whether the number are even or odd
#include<iostream>
using namespace std;
int main()
   {
    //declaring the variables
    int n;
    //take the number
    cout<< "enter the integer:";
    cin>> n;
    if (n % 2 == 0)
    cout << n<<"is even";
    else 
    cout << n<<"is odd";
    return 0;
    }

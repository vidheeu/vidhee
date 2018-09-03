//to check whether a character is uppercase or lowercase
#include<iostream>
using namespace std;
int main()
   {
   //declaring the variables
   char ch;
   //taking the character
   cout<<"enter the character:";
   cin>> ch;
   if(ch>='A' && ch<='z')
   {cout<<ch<<"is uppercase";
   }
   else 
   {cout<<ch<<"is lowercase";
   } 
   return 0;
   }

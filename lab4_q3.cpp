//program to enter two angles of a triangle and find t
#include<iostream>
using namespace std;
int main()
{
//decalre variables
float a,b,c;
// process
cout << "enter the angle a :";//angle 1
cin >> a;
cout << "enter the angle b :";//angle 2
cin >> b;
c=180-(a+b);//CALCULATING
cout << "the third angle is:"<< c << endl;
cout<< endl;
return 0;
}



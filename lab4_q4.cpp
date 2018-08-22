//to enter base and height of triangle and find the area
#include<iostream>
using namespace std;
int main()
{
// declare variables 
float hght,base,area;
//process
cout << "enter hght:";
cin >> hght;
cout << "enter base:";
cin >> base;
area=.5*(base*hght);
cout << "the area of triangle is:"<< area << endl;
return 0;
}

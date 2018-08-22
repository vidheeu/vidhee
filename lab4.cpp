//to enter length in centimeter and convert into meter and kilometer
#include <iostream>
using namespace std;
int main()
{
// declaring variables
float km, cent, met;
//process
cout <<"convert cent into km and m:";
cout <<"input the cm value:";
cin >> cent;
met= (cent/100);//converting into m
km= (cent/10000);//converting into km
cout << "distance in met is:"<< met << endl;//result
cout << "distance in km is:"<< km << endl;//result
cout << endl;
return 0;
} 

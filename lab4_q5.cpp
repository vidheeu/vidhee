//to enter P,T,R AND calculate simple interest
#include<iostream>
using namespace std;
int main ()
{
//declare variables
float P, R,T, I;
//process
cout <<"enter P :";
cin >> P;
cout << "enter R :";
cin >> R;
cout << "enter T :";
cin >> T;
I=P*R*T;
cout << "the simple interset is:"<< I << endl;
return 0;
}

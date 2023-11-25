/* program for  access the static variable using the scope tesolution (::)operator*/
#include<iostream>
using namespace std;
class parent
{
static int n1;
public:
static int 2;
// The class member can be accessed using the scope resolution operator.
void fun1(int n1);

//n1 is accessed by the scope resulution operator(::).
cout<<"the value of the static integer n1:"<<::n1;
cout<<"/n The value of the local variable n1"
}
//define a static member explicitly using::operator

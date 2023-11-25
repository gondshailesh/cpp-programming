//program to define the member function outside of the class using the scope resolution (::)operator
#include<iostream>
using namespace std;
class operate
{
public:

//declaration of the member function
void fun();
};
//define the member function outside the class
void operate::fun()/*return_type Class_name ::function_name */
{
cout<<"It is the member function of the class.";
}
int main ()
//create an object of the class oprate 
{
operate op;
op.fun();
return 0;
}

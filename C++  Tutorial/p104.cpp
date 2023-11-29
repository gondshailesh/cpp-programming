/* default args - functions assigns a default value to parameter that does not have matching arg in calling program 

default values are specified at function declaration time, from right to left

actual values when specified overrides default values
 
default value of arg can be global constant, global variable or even a function call
 */
#include<iostream>
using namespace std;

int display(int a, int b)
{
    return a + b;
}

void calcAmount(int principle, int years, float rate = 8.0, int sum = display(10, 10))
{
    float si = (principle*years*rate)/100;
    float tot = si + principle;
    cout<<"\nTotal receivable = "<<tot<<endl;
    cout<<"sum = "<<sum<<endl;
}

int main()
{  
    int p, y;
    cout<<"\nEnter principle : ";
    cin>>p;
    cout<<"Enter no. years : ";
    cin>>y;

    calcAmount(p, y); // 1 arg missing
    calcAmount(p, y, 10.0); // no arg missing

    return 0;
}


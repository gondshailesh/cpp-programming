// Two numbers are entered through keyboard, find the value of one number raised to power of another
// =========== do not use library function ========
#include<iostream>
using namespace std;

int main()
{  
    int n1, n2, power = 1;
    cout<<"enter first number : ";
    cin>>n1;
    cout<<"enter second number : ";
    cin>>n2;

    for(int i = 1; i<=n2; i++)
    {
        power = power * n1;
    }
    cout<<"result = "<<power;

    return 0;
}
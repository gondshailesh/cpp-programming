// program to find HCF / GCD of given two numbers
// Highest common factor / greatest common divisor
// first method
// eg. 6 & 8 = 2
#include<iostream>
using namespace std;

int main()
{  
    int num1, num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    while(num1 != num2)
    {
        if(num1 > num2)
        {
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    cout<<"HCF = "<<num1;

    return 0;
}
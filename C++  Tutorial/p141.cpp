// program to find HCF / GCD of given two numbers
// Highest common factor / greatest common divisor
// second method
// eg. 6 & 8 = 2
#include<iostream>
using namespace std;

int main()
{  
    int num1, num2, GCD;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;
 
    for(int i = 1; i <= num1 || i<= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    cout<<"GCD : "<<GCD;

    return 0;
}
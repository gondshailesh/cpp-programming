// LCF (lowest common factor) of two numbers
#include<iostream>
using namespace std;

int main()
{  
    int num1, num2, LCF;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            if(i == 1)
            {
                continue;
            }
            LCF = i;
            break;
        }
    }
    cout<<"LCF : "<<LCF;

    return 0;
}
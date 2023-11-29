// program to find LCF { least common factor } of two numbers

// LCF of two numbers is always 1
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, max, LCF;
    cout<<"\nenter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    num1 > num2 ? (max = num1):(max = num2);

    for(int i = 1; i <= max; i++)
    {
        if(i == 1)
        {
            continue;
        }
        else{
            if(num1 % i == 0 && num2 % i == 0)
            {
                LCF = i;
                break;
            } 
        }
    }
    cout<<"\nLCF of "<<num1<<" & "<<num2<<" is "<<LCF<<"\n\n";

    return 0;
}
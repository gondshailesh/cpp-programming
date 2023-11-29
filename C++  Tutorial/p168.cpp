// program to print LCM of two numbers
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, LCM;

    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    int max = num1 > num2 ? num1 : num2;

    for(int i = 1; ; i++)
    {
        if(max % num1 == 0 && max % num2 == 0)
        {
            LCM = max;
            break;
        }
        max++;
    }
    cout<<"LCM of "<<num1<<" & "<<num2<<" = "<<LCM;

    return 0;
}
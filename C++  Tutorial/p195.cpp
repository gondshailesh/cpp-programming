// program to print series from a to b using recursion
#include<iostream>
using namespace std;

int print(int a, int b)
{
    cout<<a<<endl;
    if(a == b)
    {
        return 0;
    }
    a++;
    print(a, b);
}

int main()
{
    int num1, num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    print(num1, num2);

    return 0;
}
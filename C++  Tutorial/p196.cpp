// program to print all even numbers and their sum from 'm' to 'n'
#include<iostream>
using namespace std;

static int sum = 0, count = 0; // global static var

int print(int m, int n)
{
    if(m % 2 == 0)
    {
        cout<<m<<endl;
        count++;
        sum = sum + m;
    }
    if(m == n)
    {
        return 0;
    }
    m++;
    print(m, n);
}

int main()
{
    int num1, num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    print(num1, num2);
    cout<<"count = "<<count<<endl;
    cout<<"sum = "<<sum;

    return 0;
}

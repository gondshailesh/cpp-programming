// input a number digit by digit using character
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int number = 0;
    char digit;

    cout<<"\nenter digits : ";
    
    while((digit = getchar()) && digit != '\n')
    {
        number = number * 10 + (digit - '0');
    }
    cout<<endl<<"your number : "<<number<<endl<<endl;

    return 0;
}
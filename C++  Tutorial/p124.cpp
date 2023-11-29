// program to reverse any number
#include<iostream>
using namespace std;

int main()
{  
    int num, d, rev = 0;
    cout<<"Enter a number : ";
    cin>>num;

    while(num > 0)
    {
        d = num % 10;
        rev = rev*10 + d;
        num = num/10;
    }
    cout<<"reverse : "<<rev;

    return 0;
}
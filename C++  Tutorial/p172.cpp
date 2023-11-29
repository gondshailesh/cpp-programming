// factors of number using goto statement
#include<iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cout<<"enter a number : ";
    cin>>num;

    cout<<"factors of "<<num<<" are : ";
    factor:         // label
    if(num % i == 0)
    {
        cout<<i<<" ";
    }
    i++;
    if(i <= num)
    {
        goto factor;
    }
   
    return 0;
}
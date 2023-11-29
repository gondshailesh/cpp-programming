// count no. of digits in given number
#include<iostream>
using namespace std;

int main()
{  
    int num, count = 0;
    cout<<"Enter a number : ";
    cin>>num;

    while(num > 0)
    {
        num = num/10;
        count++;
    }
    cout<<"no. digits : "<<count<<endl;

    return 0;
}
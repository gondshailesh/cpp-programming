// program to check given number and it`s reverse is same or not (Palindrome)
#include<iostream>
using namespace std;

int main()
{  
    int num, temp, d, rev = 0;
    cout<<"Enter a number : ";
    cin>>num;

    temp = num;

    while(num > 0)
    {
        d = num % 10;
        rev = rev*10 + d;
        num = num/10;
    }
    cout<<"reverse : "<<rev<<endl;
    if(rev == temp)
    {
        cout<<"palindrome\n";
    }
    else{
        cout<<"not palindrome\n";
    }

    return 0;
}
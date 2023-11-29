// palindrome program
#include<iostream>
using namespace std;

int main()
{   
    int n, temp, d, rev = 0;
    cout<<"Enter a number : ";
    cin>>n;

    temp = n;

    while(n != 0)
    {
        d = n % 10;
        n = n / 10;
        rev = rev*10 + d;
    }

    if(rev == temp)
    {
        cout<<temp<<" is a palindrome";
    }
    else{
        cout<<temp<<" is not a palindrome";
    }

    return 0;
}

// program to print all whole numbers (Integers) between a negative number and a positive number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    
    for(int i = -n; i<=n; i++)
    {
        cout<<i<<endl;
    }

    return 0;
}
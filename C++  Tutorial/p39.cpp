// 'n' natural numbers in reverse
#include<iostream>
using namespace std;

int main()
{
    int i, n;
    
    cout<<"Enter a number : ";
    cin>>n;

    for(i = n; i>=1; i--)
    {
        cout<<i<<endl;
    }
   
    return 0;
}
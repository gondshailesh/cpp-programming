// print largest among three numbers
#include<iostream>
using namespace std;

int main()
{  
    int a, b, c;
    cout<<"\nEnter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;

    if(a > b)
    {
        if(a > c)
        {
            cout<<"\nLargest = "<<a;
        }
        else{
            cout<<"\nLargest = "<<c;
        }
    }
    else{
        if(b > c)
        {
            cout<<"\nLargest = "<<b;
        }
        else{
            cout<<"\nLargest = "<<c;
        }
    }

    return 0;
}
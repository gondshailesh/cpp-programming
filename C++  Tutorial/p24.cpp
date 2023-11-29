// nested if else
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n > 0)
    {
        cout<<n<<" is a positive number"<<endl;

        if(n % 2 == 0)
        {
            cout<<n<<" is even number"<<endl;
        }
        else{
            cout<<n<<" is odd number"<<endl;
        }
    }
    
    else if(n == 0)
    {
        cout<<n<<" is zero"<<endl;
    }

    else 
    {
         cout<<n<<" is a negative number"<<endl;
    }
    
    return 0;
}

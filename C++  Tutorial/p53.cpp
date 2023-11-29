// whether a given number is prime or not
// number divisible by 1 and itself only
#include<iostream>
using namespace std;

int main()
{
    int i, n, prime = 1;
    cout<<"Enter a number : ";
    cin>>n;

    for(i = 2; i<n; i++)  
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(n == 1)
    {
        cout<<n<<" is neither prime nor composite";
    }
    else if(prime)
    {
        cout<<n<<" is prime"<<endl;
    }
    else{
        cout<<n<<" is composite"<<endl;
    }

    return 0;
}
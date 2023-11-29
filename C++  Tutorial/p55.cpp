// composite numbers in range
// numbers which are not prime
#include<iostream>
using namespace std;

int main()
{
    int i, j, n1, n2, prime;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    for(i = n1; i<=n2; i++)
    {
        prime = 0;
        for(j = 2; j<i; j++)
        {
            if(i % j == 0)
            {
                prime++;
            }
        }
        if(i == 1)
        {
            continue;
        }
        else if(prime)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}
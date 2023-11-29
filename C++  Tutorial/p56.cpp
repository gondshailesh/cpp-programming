// pattern
#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n;  
    cout<<"Enter rows : ";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        for(j = 1; j <= 2*i-1; j++)
        {
            cout<<"- ";
        }
        k += 2;
        cout<<"\n";
    }

    return 0;
}
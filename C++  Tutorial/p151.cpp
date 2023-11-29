// program to display pattern
#include<iostream>
using namespace std;

int main()
{  
    int n, i, j;
    cout<<"enter rows : ";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        for(j = i; j>=1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
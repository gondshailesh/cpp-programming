// program to display a pattern ======= Important =======

/*
    
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

*/
#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout<<"enter rows : ";
    cin>>n;

    for(i = n; i>=1; i--)
    {
        for(j = 1; j<=n; j++)
        {
            cout<<j<<" ";
        }
        n--;
        cout<<endl;
    }  
   
    return 0;
}
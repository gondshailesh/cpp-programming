// program to display a pattern ======= Important =======

/*
    
    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"enter rows : ";
    cin>>n;
    k = n;
    
    for(i = n; i>=1; i--)
    {
        for(j = n; j<=k; j++)
        {
            cout<<j<<" ";
        }
        n--;
        cout<<endl;
    }  
   
    return 0;
}
// program to display a pattern ======= Important =======

/*
    
    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
    5

*/
#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"enter rows : ";
    cin>>n;
    k = 1;
    

    for(i = n; i>=1; i--)
    {
        for(j = k; j<=n; j++)
        {
            cout<<j<<" ";
        }
        k++;
        cout<<endl;
    }  
   
    return 0;
}
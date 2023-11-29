// program to display a pattern ======= Important =======

/*
    
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

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
        for(j = 1; j<=k; j++)
        {
            cout<<j<<" ";
        }
        k++;
        cout<<endl;
    }  
   
    return 0;
}
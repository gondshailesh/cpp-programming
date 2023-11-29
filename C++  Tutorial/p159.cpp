// program to display a pattern ======= Important =======

/*
    
    5 
    5 4 
    5 4 3 
    5 4 3 2 
    5 4 3 2 1

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
        for(j = k; j>=n; j--)
        {
            cout<<j<<" ";
        }
        n--;
        cout<<endl;
    }  
   
    return 0;
}
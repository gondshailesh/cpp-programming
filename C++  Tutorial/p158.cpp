// program to display a pattern ======= Important =======

/*
    
    5 4 3 2 1
    5 4 3 2 
    5 4 3 
    5 4 
    5 

*/
#include<iostream>
using namespace std;

int main()
{ 
    int n, i, j, k;
    cout<<"enter a number : ";
    cin>>n;

    k = 1;

    for(i = n; i>=1; i--)
    {
        for(j = n; j>=k; j--)
        {
            cout<<j<<" ";
        }
        k++;
        cout<<endl;
    }

    return 0;
}
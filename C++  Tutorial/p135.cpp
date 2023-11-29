// program to print series - n, n*1, n*2, n*3 , n*4   ..... upto mth term using loop 
#include<iostream>
using namespace std;

int main()
{  
    int m, n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"enter mth term : ";
    cin>>m;

    for(int i = n, j = 1; i<m; i = i*j, j++)
    {
        cout<<i<<" ";
        i = n;
    }

    return 0;
}
// program to diplay pattern
/*

   5 5 5 5 5
   4 4 4 4
   3 3 3
   2 2
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
            cout<<i<<" ";
        }
        n--;
        cout<<endl;
    }  
   
    return 0;
}
// program to display pattern

/*

15 14 13 12 11
10 9 8 7 
6 5 4
3 2
1

*/
#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cout<<"enter rows : ";
    cin>>n;
    k = 15;
    

    for(i = n; i>=1; i--)
    {
        for(j = i; j>=1; j--)
        {
            cout<<k--<<" ";
        }
        cout<<endl;
    }  
   
    return 0;
}
// storing tables of two numbers in memory using 2D array
// arr[][] = [rows][cols] - 2 dimensions 
#include<iostream>
using namespace std;

void storeTable(int arr[][10], int m, int n, int num)
{
    for(int i = 0; i<n; i++)   
    {
        arr[m][i] = num * (i + 1);
    }
}

int main()
{   
    int n1, n2;
    cout<<"\nEnter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    int table[2][10];

    storeTable(table, 0, 10, n1);
    storeTable(table, 1, 10, n2);

    cout<<endl;

    // print table 1
    for(int i = 0; i<10; i++)   
    {
        table[0][i] = n1 * (i + 1);
        cout<<table[0][i]<<" ";
    }

    cout<<endl;

    // print table 2
    for(int i = 0; i<10; i++)   
    {
        table[1][i] = n2 * (i + 1);
        cout<<table[1][i]<<" ";
    }

    return 0;
}

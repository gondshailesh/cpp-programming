// arrays as function arguments - using pointer notation

#include<iostream>
using namespace std;

void storeNum(int *, int);
void printNum(int *, int);

int main()
{  
    int n;
    cout<<"Input size of array : ";
    cin>>n;

    int numbers[n];

    storeNum(numbers, n);

    cout<<endl;

    printNum(numbers, n);

    return 0;
}

void storeNum(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr + i);
    }
}

void printNum(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<i<<" index : ";
        cout<<*(ptr + i)<<endl;
    }
}

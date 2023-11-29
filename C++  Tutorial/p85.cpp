/*  =========== IMPORTANT ===========  */

// Passing arrays as function arguments - using Array notation

// Call by address

#include<iostream>
using namespace std;

void printNum(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cout<<arr[i]<<endl;
    }
}

int main()
{  
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    const int size = n;

    int numbers[size]; // dataType arrayRef[size]; 

    // input
    for(int i = 0; i<size; i++)
    {
        cout<<i<<" index : ";
        cin>>numbers[i];
    }

    cout<<endl;

    printNum(numbers, size);

    return 0;
}

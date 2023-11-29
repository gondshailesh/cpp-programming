// largest and smallest among five numbers
#include<iostream>
using namespace std;

int main()
{  
    int arr[5], largest, smallest;

    //input
    for(int i = 0; i<5; i++)
    {
        cout<<i<<" index : ";
        cin>>arr[i];
    }

    // output
    largest = smallest = arr[0];

    for(int i = 0; i<5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout<<"Largest = "<<largest<<endl;
    cout<<"Smallest = "<<smallest<<endl;

    return 0;
}
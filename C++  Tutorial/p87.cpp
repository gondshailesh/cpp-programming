// Multi-dimensional array ( 2D array )
#include<iostream>
using namespace std;

int main()
{  
    int arr[3][3]; // arr[rows][cols]

    cout<<"\n==== input 2D array ===="<<endl<<endl;

    // input first row
    for(int i = 0; i<3; i++)
    {
        cout<<0<<" "<<i<<" index : ";
        cin>>arr[0][i];
    }

    cout<<endl;

    // input second row
    for(int i = 0; i<3; i++)
    {
        cout<<1<<" "<<i<<" index : ";
        cin>>arr[1][i];
    }

    cout<<endl;

    // input third row
    for(int i = 0; i<3; i++)
    {
        cout<<2<<" "<<i<<" index : ";
        cin>>arr[2][i];
    }

    cout<<"\n==== print 2D array ===="<<endl<<endl;

    // print first row
    for(int i = 0; i<3; i++)
    {
        cout<<0<<" "<<i<<" index : ";
        cout<<arr[0][i]<<endl;
    }

    cout<<endl;

    // print second row
    for(int i = 0; i<3; i++)
    {
        cout<<1<<" "<<i<<" index : ";
        cout<<arr[1][i]<<endl;
    }

    cout<<endl;

    // print third row
    for(int i = 0; i<3; i++)
    {
        cout<<2<<" "<<i<<" index : ";
        cout<<arr[2][i]<<endl;
    }

    cout<<endl;

    return 0;
}
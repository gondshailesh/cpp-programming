// array program 
// print Final prices of three products
#include<iostream>
using namespace std;

int main()
{   
    float price[3];

    cout<<"Enter price 1 : ";
    cin>>price[0];

    cout<<"Enter price 2 : ";
    cin>>price[1];

    cout<<"Enter price 3 : ";
    cin>>price[2];

    //print
    cout<<"\nfinal price 1 = "<<price[0] + 0.18 * price[0]<<endl;
    cout<<"final price 2 = "<<price[1] + 0.18 * price[1]<<endl;
    cout<<"final price 3 = "<<price[2] + 0.18 * price[2]<<endl;

    return 0;
}


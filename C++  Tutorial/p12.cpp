//Area of triangle
#include<iostream>
using namespace std;

int main()
{
    float base, height;
    cout<<"Enter base : ";
    cin>>base;
    cout<<"Enter height : ";
    cin>>height;

    float Area = 0.5*base*height;

    cout<<"Area = "<<Area<<endl;

    return 0;
}
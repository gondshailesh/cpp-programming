// perimeter of rectangle
#include<iostream>
using namespace std;

int main()
{
    int l, b;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;

    int peri = 2*(l + b);

    cout<<"Perimeter of rectangle = "<<peri<<endl;

    return 0;
}
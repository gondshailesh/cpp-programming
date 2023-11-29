// Area of circle
#include<iostream>
using namespace std;

int main()
{
    const float pi = 3.14;
    float rad;
    cout<<"Enter radius : ";
    cin>>rad;

    float Area = pi*rad*rad;

    cout<<"Area = "<<Area<<endl;

    return 0;
}
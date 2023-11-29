// Area of circle, square using function
#include<iostream>
using namespace std;

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float squareArea(float side)
{
    return side*side;
}

int main()
{
    float side, rad;

    cout<<"Enter side of square : ";
    cin>>side;  
    float Area_square = squareArea(side);
    cout<<"Area of square : "<<Area_square<<endl;

    cout<<"Enter radius of circle : ";
    cin>>rad;  
    float Area_circle = circleArea(rad);
    cout<<"Area of circle : "<<Area_circle<<endl;

    return 0;
}
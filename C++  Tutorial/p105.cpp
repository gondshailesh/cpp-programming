/* Function overloading - it means using single function to perform different tasks 

- Same function name , different no. & types of args , return types

- compiler checks prototype and chooses func which matches types and no. args passed

- it is an important aspect of polymorphism

- reduces size of a program

*/
#include<iostream>
using namespace std;

// volume of cube
float volume(double a)
{
    return (a*a*a);
}

// volume of cuboid 
int volume(int l, float b, int h)
{
    return (l*b*h);
}

// volume of cylinder
float volume(double r, int h)
{
    return (3.14 * r * r * h);
}

int main()
{  
    cout<<"Volume of cube with side 3 is "<<volume(3.0)<<endl;
    cout<<"Volume of cuboid with dimensions 3, 4.5, 5 is "<<volume(3, 4.5, 5)<<endl;
    cout<<"Volume of cylinder with radius 3.5 and height 5 is "<<volume(3.5, 5);

    return 0;
}
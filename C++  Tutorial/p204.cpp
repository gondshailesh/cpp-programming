// program to print two parts of complex number
// one part is imaginary and other part is real

#include<iostream>
using namespace std;

class complex{
    int real;
    int img;

public:
    complex(int x, int y);
    void display();
};

complex ::complex(int x, int y)
    {
        real = x;
        img = y;
    }

void complex::display()
{
    cout<<"\nreal part of complex number : "<<real<<endl;
    cout<<"imaginary part of complex number : "<<img<<endl<<endl;
}

int main()
{
    int x, y;
    cout<<"\nEnter first number : ";
    cin>>x;

    cout<<"Enter second number : ";
    cin>>y;

    complex c1(x, y);

    c1.display();

    return 0;
}
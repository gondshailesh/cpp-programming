// passing objects as function arguments
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdataBySum(complex, complex); // function prototype

    void printNum(void)
    {
        cout<<"you entered complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

void complex::setdataBySum(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

int main()
{
    complex o1, o2, o3;
    o1.setdata(1, 3);
    o1.printNum();

    o2.setdata(2, 3);
    o2.printNum();

    o3.setdataBySum(o1, o2);
    o3.printNum();

    return 0;
}
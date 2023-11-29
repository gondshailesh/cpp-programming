// static data members

// 1. every object of a class contains it`s own separate data members & member functions are shared amongst all objects

// 2. when first object of class is created then, static data member is initialized to zero

// 3. no further initialization is permitted

// 4. only one such item is created for entire class 

#include <iostream>
using namespace std;

class employee
{
    int empId;
    static int count; // declaration

public:
    void setData(int a)
    {
        empId = a;
    }

    void display()
    {
        cout<<empId;
        count++;
        cout<<"\nemployee no - "<<count;
    }
};

int employee ::count = 0; // static member initialization

int main()
{
    employee emp[3]; // array of objects
    int val;

    for(int i = 0; i<3; i++) 
    {
        cout<<"enter id of employee "<<i+1<<" : ";
        cin>>val;
        emp[i].setData(val);
    }

    for(int i = 0; i<3; i++)
    {
        cout<<"\nemp id of employee "<<i+1<<" is "; 
        emp[i].display();
        cout<<endl;
    }
 
    return 0;
}
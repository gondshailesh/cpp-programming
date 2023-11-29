// array of objects
// like any other built in data type, we can create array of objects also
#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static double salary;
public:
    void setdata(void)    
    {
        cout<<"Enter id of employee : ";
        cin>>id;
        salary += 1000;
    }
    void display();
};

// data-type class::member;
double Employee::salary = 10000.00;

void Employee::display()
{
    cout<<"\nEmployee id is "<<id<<endl;
    cout<<"Employee salary is "<<salary<<endl;
}

int main()
{
    Employee fb[4]; // array of objects

    for(int i = 0; i<4; i++)
    {
        fb[i].setdata();
    }

    for(int i = 0; i<4; i++)
    {
        fb[i].display();
    }

    return 0;
}
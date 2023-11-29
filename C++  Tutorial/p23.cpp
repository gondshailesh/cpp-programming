// Multiple if statements
#include<iostream>
using namespace std;

int main()
{
    int emp_id, base_salary;
    float bonus, tot;
    string name;

    cout<<"Enter your id : ";
    cin>>emp_id;

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"Enter your salary : ";
    cin>>base_salary;

    if(base_salary >= 50000)
    {
        bonus = 0.50 * base_salary;
        tot = base_salary + bonus;
        cout<<"Your name : "<<name<<endl;
        cout<<"Your bonus : "<<bonus<<endl;
        cout<<"Total salary : "<<tot<<endl;
    }

    cout<<endl;

    if(base_salary >= 30000 && base_salary < 50000)
    {
        bonus = 0.37 * base_salary;
        tot = base_salary + bonus;
        cout<<"Your name : "<<name<<endl;
        cout<<"Your bonus : "<<bonus<<endl;
        cout<<"Total salary : "<<tot<<endl;
    }

    cout<<endl;

    if(base_salary < 30000)
    {
        bonus = 0.18 * base_salary;
        tot = base_salary + bonus;
        cout<<"Your name : "<<name<<endl;
        cout<<"Your bonus : "<<bonus<<endl;
        cout<<"Total salary : "<<tot<<endl;
    }

    return 0;
}
// OOPs in C++
// nesting of member functions
// a member func can call other member func
#include <iostream>
#include <string>
using namespace std;

// class declaration
class student
{
private: // by default
    int roll;
    float cgpa;

public:
    string name;
    void get_data(void);
    void put_data(void)
    {
        cout << "\nroll no : " << roll << endl;
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpa << endl;
    }
};

void student ::get_data(void) // student :: is membership label that resolves scope of member function
{
    cout << "enter roll no : ";
    cin >> roll;
    cin.ignore();
    cout << "enter name : ";
    getline(cin, name);
    cout << "enter cgpa : ";
    cin >> cgpa;
}

int main()
{
    student s1;
    s1.name = "santosh";
    s1.get_data(); // method is public
    s1.put_data();

    return 0;
}
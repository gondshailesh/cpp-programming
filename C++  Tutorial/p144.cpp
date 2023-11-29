// different classes can have same member functions
// membership label resolves their scope
#include <iostream>
using namespace std;

// student class
class student
{
private:
    char name[20];
    int age;
    string address;
    void getData();

public:
    void display();
};

void student ::getData()
{
    cout << "\nenter student name : ";
    char ch = ' ';
    int i = 0;
    while (cin.get(ch) && ch != '\n')
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    cout << "enter age : ";
    cin >> age;

    cin.ignore();
    cout << "enter address : ";
    getline(cin, address);
}

void student ::display(void)
    {
        cout<<"\nStudent details : ";
        getData();
        cout << "\nStudent details : \n";
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
    }

// employee class
class employee
{
    char name[20];
    int age;
    string address;

public:
    void getData();
    void display(void)
    {
        cout << "\nEmployee details : \n";
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Address : " << address << endl;
    }
};

void employee ::getData()
{
    cout << "\nenter emloyee name : ";
    char ch = ' ';
    int i = 0;
    while (cin.get(ch) && ch != '\n')
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    cout << "enter age : ";
    cin >> age;

    cin.ignore();
    cout << "enter address : ";
    getline(cin, address);
}

int main()
{
    employee e1[2]; // array of objects
    student s[2];

    // employee info
    cout << "\nEmployee details : \n";
    for (int i = 0; i < 2; i++)
    {
        e1[i].getData();

    }

    // employee
    for (int i = 0; i < 2; i++)
    {
        e1[i].display();
    }

    //student
    for (int i = 0; i < 2; i++)
    {
        s[i].display();
    }

    return 0;
}
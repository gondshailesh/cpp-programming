// structures program

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

// class
class employee{
    int id;
    string name;
    float salary;

public:
    void setData(int a, string str, float b)   
    {
        id = a;
        name = str;
        salary = b;
    }
    void display();
};

void employee::display()
{
    cout<<"Employee id = "<<id<<endl;
    cout<<"Employee name = "<<name<<endl;
    cout<<"Employee salary = "<<salary<<endl;
    cout<<endl;
}

// ------------------------------------------------------

// structure
struct student{
    int roll;
    char name[50];
    float cgpa;
};

void print(student *stu, int n)
{
    cout<<"\n\n-----------------------------------------------------------\n";

    cout<<"\n\t\t    *---------------*    \n";
    cout<<"\t\t    |student details|    \n";
    cout<<"\t\t    *---------------*    \n";
    
    for(int i = 0; i<n; i++)
    {
        // cout<<"\nStudent roll no : "<< (stu+i)->roll <<endl;
        // cout<<"Student name : "<< (stu+i)->name <<endl;
        // cout<<"Student cgpa : "<< (stu+i)->cgpa <<endl;

        cout<<"\nStudent roll no : "<< (*(stu+i)).roll <<endl;
        cout<<"Student name : "<< (*(stu+i)).name <<endl;
        cout<<"Student cgpa : "<< (*(stu+i)).cgpa <<endl;
    }
    cout<<endl;
    cout<<"-----------------------------------------------------------\n\n";
}

int main()
{
    int size;
    cout<<"\nEnter no. of students & Employees : ";
    cin>>size;

    student s[size]; // array of structures

    char ch = ' ', str[50];
    int j;

    cout<<"\n\n-----------------------------------------------------------\n";

    // input
    cout<<"\n\t\t    *---------------*    \n";
    cout<<"\t\t    |student details|    \n";
    cout<<"\t\t    *---------------*    \n";
    
    for(int i = 0; i<size; i++)
    {
        j = 0;
        cout<<"\nEnter roll no : ";
        cin>>s[i].roll;
        
        cin.ignore();

        cout<<"Enter name : ";
        while(cin.get(ch) && ch != '\n')
        {
            str[j] = ch;
            j++;
        }
        str[j] = '\0';
        strcpy(s[i].name, str);

        cout<<"Enter cgpa : ";
        cin>>s[i].cgpa;
    }

    // display
    print(s, size);

    // ----------------------------

    employee fb[size];
    int a;
    string name;
    float b;

    // input

    cout<<"\n\t\t    *---------------*    \n";
    cout<<"\t\t    |employee details|    \n";
    cout<<"\t\t    *---------------*    \n";

    for(int i = 0; i<size; i++)
    {
        cout<<"\nEnter id : ";
        cin>>a;

        cin.ignore();

        cout<<"Enter name : ";
        getline(cin, name);

        cout<<"Enter salary : ";
        cin>>b;
        fb[i].setData(a, name, b);
    }

    cout<<"\n\n-----------------------------------------------------------\n";

    //display

    cout<<"\n\t\t    *---------------*    \n";
    cout<<"\t\t    |employee details|    \n";
    cout<<"\t\t    *---------------*    \n";
    
    for(int i = 0; i<size; i++)
    {
        fb[i].display();
    }
    cout<<"-----------------------------------------------------------\n\n";

    return 0;
}
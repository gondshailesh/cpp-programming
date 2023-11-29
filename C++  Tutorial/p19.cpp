// else if ladder
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age > 18)
    {
        cout<<"you are adult\n" ;
    }
    else if(age >= 13 && age <=18)
    {
        cout<<"you are teenager\n";
    }
    else
    {
        cout<<"you are child\n" ;
    }

    return 0;
}
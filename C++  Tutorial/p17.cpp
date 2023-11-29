// if else - age 
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age : ";
    cin>>age;

    if(age >= 18)
    {
        cout<<"You are adult\n";
        cout<<"you can vote\n";
    }
    else{
         cout<<"You are not adult, hence you can`t vote";
    }

    return 0;
}

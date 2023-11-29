// pointer program
#include<iostream>
using namespace std;

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    cout<<_age<<endl;
    cout<<&age<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(&age);
    
    return 0;
}
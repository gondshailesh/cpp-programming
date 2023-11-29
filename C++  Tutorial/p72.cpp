// print addresses
#include<iostream>
using namespace std;

int main()
{  
    int age = 22;
    int *ptr = &age;

    cout<<&age<<endl;
    cout<<ptr<<endl;
    cout<<*(&ptr)<<endl;
    cout<<&ptr<<endl;
    cout<<*(ptr)<<endl;

    return 0;
}
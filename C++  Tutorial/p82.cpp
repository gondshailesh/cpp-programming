// pointer arithmetic (comparision and difference)
#include<iostream>
using namespace std;

int main()
{  
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    cout<<(int)ptr<<endl;
    cout<<(int)_ptr<<endl;

    cout<< &age - &_age <<endl;

    _ptr = &age;
    
    cout<<( _ptr != ptr );

    return 0;
}

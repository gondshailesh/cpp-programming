// pointer to pointer var - **pptr
#include<iostream>
using namespace std;

int main()
{
    float price = 100.00;
    float *ptr = &price;  

    float **pptr = &ptr;

    cout<<pptr<<endl;
    cout<<&ptr<<endl;
    cout<<*pptr<<endl;
    cout<<&price<<endl;
    cout<<**pptr<<endl;

    return 0;
}
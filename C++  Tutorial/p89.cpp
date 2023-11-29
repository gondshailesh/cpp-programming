// Array logical analysis
// * - value at address / indirection / dereference operator
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout<<*(arr)<<endl;

    cout<<*(arr + 1)<<endl;
    
    cout<<*(arr + 4)<<endl;
    
    cout<<*(arr + 5)<<endl;

    return 0;
}
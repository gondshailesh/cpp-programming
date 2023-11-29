// Will address o/p be same ?
#include<iostream>
using namespace std;

void printAddress(int *p)
{
    cout<<(int)p<<endl;
}

int main()
{  
    int n = 4;

    cout<<(int)&n<<endl;
    printAddress(&n);

    return 0;
}
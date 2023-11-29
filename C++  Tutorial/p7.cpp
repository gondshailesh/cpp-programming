// dollar to rupee conversion
#include<iostream>
using namespace std;

int main()
{
    const float dol_val = 82.5;
    float rupee, dollar;
    cout<<"Enter dollars : $";
    cin>>dollar;

    rupee = dollar * dol_val;

    cout<<"Rupee = Rs "<<rupee;

    return 0;
}
// program to check whether a given char is digit or not
#include<iostream>
using namespace std;

int main()
{
    char val;
    cout<<"Enter a char : ";
    cin>>val;

    if(val == '0' || val == '1' || val == '2' || val == '3' || val == '4' || val == '5' || val == '6' || val == '7' || val == '8' || val == '9')
    {
        cout<<val<<" is a digit"<<endl;
    }
    else{
        cout<<val<<" is not digit"<<endl;
    }

    return 0;
}

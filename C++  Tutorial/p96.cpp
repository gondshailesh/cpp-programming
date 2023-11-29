// print alphabet is uppercase or lowercase using ASCII values - a-z (97 - 122) and A - Z (65 - 90)
#include<iostream>
using namespace std;

int main()
{  
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    if(ch >= 65 && ch <=90)
    {
        cout<<ch<<" is uppercase alphabet";
    }
    else if(ch >= 97 && ch <=122)
    {
        cout<<ch<<" is lowercase alphabet";
    }
    else{
        cout<<"Invalid input\n";
    }

    return 0;
}
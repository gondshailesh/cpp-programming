// uppercase OR lowercase alphabet
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<ch<<" is uppercase alphabet"<<endl;
    }
    else{
        cout<<ch<<" is lowercase alphabet"<<endl;
    }

    return 0;
}

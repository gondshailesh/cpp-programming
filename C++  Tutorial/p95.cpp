// print alphabet is uppercase or lowercase
#include<iostream>
using namespace std;

int main()
{   
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;

    if(islower(ch))
    {
        cout<<ch<<" is lowercase alphabet";
    }
    else if(isupper(ch))
    {
        cout<<ch<<" is uppercase alphabet";
    }
    else{
        cout<<"Invalid input\n";
    }

    return 0;
}

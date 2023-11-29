// function program
#include<iostream>
using namespace std;

void printNamaste(void)
{
    cout<<"Namste"<<endl;
}

void printBonjour(void)
{
    cout<<"Bonjour"<<endl;
}

int main()
{
    char ch;
    cout<<"Enter i for indian OR f for french : ";
    cin>>ch;

    if(ch == 'I' || ch == 'i')
    {
        printNamaste();
    }
    else{
        printBonjour();
    }

    return 0;
}
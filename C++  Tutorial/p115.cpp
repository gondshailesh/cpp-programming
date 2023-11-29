// Salting ( password protection )
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char yourPass[50];
    cout<<"Enter your password : ";
    cin>>yourPass;

    char salt[50] = "@gmail%'c'om";
    char newPass[50] = {0};

    strcpy(newPass, yourPass);

    strcat(newPass, salt);

    cout<<"your new password : "<<newPass<<endl;

    return 0;
}
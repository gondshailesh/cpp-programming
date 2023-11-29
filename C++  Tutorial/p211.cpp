// capitalize first letter of each word in string
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class fullName{
    string name;
public:
    void getName(string str)
    {
        name = str;
    }
    string capitalize_first_letter();
};

string fullName:: capitalize_first_letter()
{
    for(int i = 0; i < name.length(); i++)
    {
        if(i == 0 && islower(name[i]))
        {
            name[i] = toupper(name[i]);
        }
        else if(isspace(name[i]) && islower(name[i+1]))
        {
            name[i+1] = toupper(name[i+1]);
        }
    }
    return name;
}

int main()
{
    fullName obj[3]; // array of objects
    string str;
    // get full name
    for(int i = 0; i<3; i++)
    {
        cout<<"\nenter full name : ";
        getline(cin, str);
        obj[i].getName(str);
    }

    // capitalize first letter
    for(int i = 0; i<3; i++)
    {
        cout<<"\n\nyour name : "<<obj[i].capitalize_first_letter();
    }
    cout<<"\n\n";
}
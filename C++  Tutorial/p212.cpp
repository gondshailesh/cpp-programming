// capitalize first letter & every letter after full stop in string
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class sentence{
    static string sent;
public:
    static void getSent(string str)
    {
        sent = str;
    }
    static string capitalize_letter(void);
};

string sentence:: sent = "hii, i am a coder. my name is santosh. thank you!"; // init

string sentence:: capitalize_letter(void)
{
    for(int i = 0; i < sent.length(); i++)   
    {
        if(i == 0 && islower(sent[i]))
        {
            sent[i] = toupper(sent[i]);
        }
        else if(sent[i] == '.' && islower(sent[i+2]))
        {
            sent[i+2] = toupper(sent[i+2]);
        }
    }
    return sent;
}

int main()
{
    sentence obj1, obj2;
    cout<<"\n"<<obj1.capitalize_letter()<<endl;
    cout<<"\n"<<sentence::capitalize_letter()<<endl;

    string newStr;
    cout<<"\nEnter new sentence : ";
    getline(cin, newStr);

    sentence::getSent(newStr); // call to static member function
    cout<<"\n\nyour new sentence : "<<sentence::capitalize_letter(); // most appropriate method to access/ invoke static member function
    cout<<"\n\nyour new sentence : "<<obj2.capitalize_letter();
    cout<<"\n\nyour new sentence : "<<obj1.capitalize_letter()<<"\n\n";

    return 0;
}
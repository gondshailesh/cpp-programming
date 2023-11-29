#include <iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display();
};

void binary ::read()
{
    cout<<"enter binary number : ";
    cin>>s;
}

void binary ::chk_bin()
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"not binary form\n";
            exit(0);
        }
    }
    cout<<"binary form\n";
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout<<s<<endl;
}

int main()
{
    binary bin;
    bin.read();
    // bin.chk_bin();
    bin.ones_compliment();
    bin.display();

    return 0;
}
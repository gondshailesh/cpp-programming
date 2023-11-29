// program to store bank details of person and print details
#include<iostream>
#include<cstring>
using namespace std;

class Sbi_savings{

// private    
    unsigned long int ac;
    char ac_holder[50];
    char ifsc[50];

public:    
    Sbi_savings(unsigned long int, char *, char *);
    void show_details(void);

};

Sbi_savings:: Sbi_savings(unsigned long int x, char holder[50], char Tifsc[50])
{
    ac = x;
    strcpy(ac_holder, holder);
    strcpy(ifsc, Tifsc);
}

void Sbi_savings::show_details(void)
{
    cout<<"account details : ";
    cout<<"\naccount no. = "<<ac<<endl;
    cout<<"account holder = "<<ac_holder<<endl;
    cout<<"ifsc code = "<<ifsc<<endl<<endl;
}

int main()
{
    unsigned long int x;
    char holder[50];
    char Tifsc[50];

    char ch1 = ' ', ch2 = ' ';
    int i, j;
    i = j = 0;

    cout<<"\nenter account number : ";
    cin>>x;

    cin.ignore();

    cout<<"enter ac. holder name : ";
    while(cin.get(ch1) && ch1 != '\n')
    {
        holder[i] = ch1;
        i++;
    }
    holder[i] = '\0';

    cout<<"enter ifsc code : ";
    
    while(cin.get(ch2) && ch2 != '\n')
    {
        Tifsc[j] = ch2;
        j++;
    }
    Tifsc[j] = '\0';

    Sbi_savings sb(x, holder, Tifsc);

    sb.show_details();

    return 0;
}
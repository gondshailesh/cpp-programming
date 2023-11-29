// pointer to structures

#include<iostream>
#include<cstring>
using namespace std;

struct item{
    int number;
    char name[50];
    float price;
};

// passing array of structures as args
// using pointer notation

void getInfo(item *it, int n) 
{
    cout<<"\n\t\t    *---------------*    \n";
    cout<<"\t\t    |grocery details|    \n";
    cout<<"\t\t    *---------------*    \n";
    
    char ch = ' ', str[50];
    int j;

    for(int i = 0; i<n; i++)
    {
        j = 0;
        cout<<"\nenter item number : ";
        cin>> (*(it+i)).number;

        cin.ignore();

        cout<<"enter item name : ";

        while(cin.get(ch) && ch != '\n')
        {
            str[j] = ch;
            j++;
        }
        str[j] = '\0';

        strcpy((*(it+i)).name, str);

        cout<<"enter item price : ";
        cin>> (*(it+i)).price;
    }
}

void display(item *ptr, int size)
    {
        cout<<"\n\n-----------------------------------------------------------\n";

        cout<<"\n\t\t    *---------------*    \n";
        cout<<"\t\t    |grocery details|    \n";
        cout<<"\t\t    *---------------*    \n";

        for(int i = 0; i<size; i++)
        {
            cout<<"\nitem no : "<<(ptr+i)->number<<endl;
            cout<<"item name : "<<(ptr+i)->name<<endl;
            cout<<"item price : "<<(ptr+i)->price<<endl;
        }
        cout<<endl;
    }

int main()
{
    int size;
    cout<<"\nenter no. items : ";
    cin>>size;

    item it[size]; // array of structures

    getInfo(it, size);
    cout<<endl;

    cout<<endl;
    display(it, size);

    return 0;
}
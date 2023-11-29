#include <iostream>
using namespace std;

class item
{
    int number;
    static int count; // declared

public:
    static string name; // static member in public visibility

    void getdata(int a)
    {
        number = a;
        count++;
    }

    void putcount()
    {
        cout<<"\ncount = "<<count;
    }
};

int item::count; // initialized
string item::name = "cadbury";

int main()
{
    item it[3], product;
    int val = 1;

    for(int i = 0; i<3; i++)
    {
        it[i].putcount();
    }

    // call to getdata()
    for(int i = 0; i<3; i++)
    {
        it[i].getdata(val);
        val++;
    }

    // call putcount()
    cout<<endl;
    for(int i = 0; i<3; i++)
    {
        it[i].putcount();
    }

    cout<<"\n\nproduct = "<<item::name; // access without object
    
    product.name = "dairymilk"; // access using object
    cout<<"\nproduct = "<<product.name;

    item::name = "wafers";
    cout<<"\nproduct = "<<item::name;

    item::name = "candy";
    cout<<"\nproduct = "<<item::name;

    return 0;
}
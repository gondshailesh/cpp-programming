// object memory allocation & using array in class

// every object of a class has it`s own data members & member functions are shared amongst all objects of class
// single memory is allocated to common members
// memory is allocated in contiguous way for data members

#include <iostream>
using namespace std;

// class declaration
class Shop
{
    // data members
    int itemId[5]; // array
    int itemPrice[5]; // array
    int count;

public:
    // member functions
    void setCount(void)
    {
        count = 0;
    }

    void setInfo(void)
    {
        cout << "enter id of item " << count + 1 << " : ";
        cin >> itemId[count];
        cout << "enter price of item " << count + 1 << " : ";
        cin >> itemPrice[count];
        count++;
    }
    void display(void);
};

void Shop ::display(void)
{
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "price of item with id - " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.setCount();

    for (int i = 0; i < 5; i++)
    {
        dukan.setInfo();
        cout<<endl;
    }

    dukan.display();

    return 0;
}
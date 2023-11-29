// static member functions
// can access only other static members of same class
// public static method can be invoked without specifiying object of class

// class::method();
#include <iostream>
using namespace std;

class Myclass
{
    static string gratitude;
    static int sum(int x, int y) // private by default
    {
        return x + y;
    }

public:
    static int access(int a, int b)
    {
        sum(a, b);
    }
    static void Gratitude();
};

string Myclass::gratitude = "thank you !";

void Myclass::Gratitude(void)
{
    cout<<"\n"<<gratitude;
}

int main()
{
    Myclass o1;

    // int result = o1.access(10, 20);
    int result = Myclass::access(5, 10);
    cout << "sum = " << result;
    
    Myclass::Gratitude();

    return 0;
}
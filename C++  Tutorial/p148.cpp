// program to make user-defined pow() function  |  m ^ n
#include <iostream>
using namespace std;

int power(int a, int b, char ch)
{
    int temp = a;
    switch (ch)
    {
    case '^':
        for (int i = 1; i < b; i++)
        {
            a = temp * a;
        }
        break;
    }
    return a;
}

int main()
{
    int m, n;
    char ch;

    cout << "enter number : ";
    cin >> m;
    cout << "enter operation : ";
    cin >> ch;
    cout << "enter number : ";
    cin >> n;

    cout << "result = " << power(m, n, ch);

    return 0;
}
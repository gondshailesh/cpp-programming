// program to count no. of odd, even, divisible by num, prime, composite numbers in an array
// using function & array pointer
// 1 is neither composite nor prime number

#include<iostream>
using namespace std;

void storeNum(int *, int);
void countNum(int *, int, int);

int main()
{  
    int n, number;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter number : ";
    cin>>number;

    int numbers[n];

    cout<<endl;
    cout<<"==== input array ===="<<endl;
    storeNum(numbers, n);

    cout<<endl;
    countNum(numbers, n, number);

    return 0;
}

void storeNum(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<i<<" index : ";
        cin>>*(arr + i);
    }
}

void countNum(int *arr, int n, int num)
{
    int countEven, countOdd, countTimes, countPrime, countComposite, prime;
    countEven = countOdd = countTimes = countPrime = countComposite = 0;

    // Even
    cout<<"==== Even ===="<<endl;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 == 0)
        {
            countEven++;
        }
    }
    cout<<"Even no. = "<<countEven;
    cout<<endl;

    // odd
    cout<<"\n==== Odd ===="<<endl;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 != 0)
        {
            countOdd++;
        }
    }
    cout<<"Odd no. = "<<countOdd;
    cout<<endl;

    // times
    cout<<"\n==== Times ===="<<endl;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) % 5 == 0)
        {
            countTimes++;
        }
    }
    cout<<"numbers div by "<<num<<" = "<<countTimes;
    cout<<endl;

    // prime
    cout<<"\n==== Prime ===="<<endl;
    for(int i = 0; i < n; i++)
    {
        prime = 1;
        for(int j = 2; j<arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(arr[i] == 1)
        {
            continue;
        }
        else if(prime)
        {
            countPrime++;
        }
        else{
            countComposite++;
        }
    }
    cout<<"prime no. = "<<countPrime;
    cout<<endl;

    // composite
    cout<<"\n==== Compostie ===="<<endl;
    cout<<"composite no. = "<<countComposite;
    cout<<endl<<"\n";
}

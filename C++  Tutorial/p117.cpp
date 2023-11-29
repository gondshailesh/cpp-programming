//count & print vowels and consonants in a string
#include<iostream>
#include<cstring>
using namespace std;

void count(string arr)
{
    int countVowel = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            countVowel++;
        }
    }
    cout<<"no. vowels = "<<countVowel<<endl;
    int len = arr.length();
    int countCons = len - countVowel;
    cout<<"no. consonants = "<<countCons<<endl;
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    count(str);

    return 0;
}

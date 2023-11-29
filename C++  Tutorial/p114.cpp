// user defined string functions
#include<iostream>
#include<cstring>
using namespace std;

// ========== String length ============

// int stringLength(string arr)
// {
//     int count = 0;
//     int i;
//     for(i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

//======== String copy ==========

// void stringCopy(char dest[], char src[])
// {
//     char temp[] = {0};
//     int i;
//     for(i = 0; dest[i] != '\0'; i++)
//     {
//         temp[i] = dest[i];
//     }
//     temp[i] = '\0'; 

//     for(i = 0; src[i] != '\0'; i++)
//     {
//         dest[i] = src[i];
//     }
//     dest[i] = '\0';
//     cout<<"destination string : "<<dest<<endl;
// }

// ========= String concat =======

// void stringConcat(char str1[], char str2[])
// {
//     int len1, len2, length, count = 0, i, j;

//     len1 = strlen(str1);
//     len2 = strlen(str2);
//     length = len1 + len2;

//     for(i = 0; count != length; i++, count++)
//     {
//         if(str1[i] == '\0')
//         {
//             for(j = 0; str2[j] != '\0'; i++, j++)
//             {
//                 str1[i] = str2[j];
//             }
//             str1[i] = '\0';
//         }
//     }

//     cout<<"\nnew string : "<<str1<<endl;
// }


int main()
{  
    // ======= string length ====== //

    // string str;
    // cout<<"Enter a string : ";
    // getline(cin, str);

    // cout<<"Length = "<<stringLength(str);


    // ======= string copy ====== //

    // char src[50], dest[50];

    // cout<<"Enter source string : ";
    // char ch1 = ' ';
    // int i = 0;

    // while(cin.get(ch1) && ch1 != '\n')
    // {
    //      src[i] = ch1;
    //      i++;
    // }
    // src[i] = '\0';

    // cout<<"Enter destination string : ";
    // char ch2 = ' ';

    // while(cin.get(ch2) && ch2 != '\n')
    // {
    //      dest[i] = ch2;
    //      i++;
    // }
    // dest[i] = '\0'; 

    // stringCopy(dest, src);
    

    // ======= string concat ====== //

    // char arr1[100], arr2[50];

    // cout<<"Enter first string : ";
    // char ch1 = ' ';
    // int i = 0 , j = 0;

    // while(cin.get(ch1) && ch1 != '\n')
    // {
    //      arr1[i] = ch1;
    //      i++;
    // }
    // arr1[i] = '\0';

    // cout<<"\nEnter second string : ";
    // char ch2 = ' ';

    // while(cin.get(ch2) && ch2 != '\n')
    // {
    //      arr2[j] = ch2;
    //      j++;
    // }
    // arr2[j] = '\0';

    // stringConcat(arr1, arr2);

    return 0;
}
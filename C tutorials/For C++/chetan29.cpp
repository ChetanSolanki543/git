//prg to check whether a character is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char a,e,i,o,u;
    char alpha;
    cout<<"enter alpha ";
    cin>>alpha;
    switch (alpha)
    {
        case 'a':
        cout<<"its vowel";
        break;
        case 'e':
        cout<<"its vowel";
        break;
        case 'i':
        cout<<"its vowel";
        break;
        case 'o':
        cout<<"its vowel";
        break;
        case 'u':
        cout<<"its vowel";
        break;
    
    default:
        cout<<"its consonant";
        break;
    } return 0;
}
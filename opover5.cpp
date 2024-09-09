#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class String
{
        char first[20];
        char second[20];
    public:
        String(char a[20], char b[20])
        {
            strcpy(first,a);
            strcpy(second,b);
        }    
        void operator + ()
        {
            cout<<strcat(first,second);
            
        }
};
int main()
{
    char a1[]="hello";
    char a2[]="world";
    
    String str1(a1,a2);
    +str1;
}
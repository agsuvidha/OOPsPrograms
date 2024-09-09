#include<iostream>  
#include<cstring>
using namespace std;  
  
class String  
{  
    char str[20]; //member variable for string input  
public:  
    void input() //member function  
    {  
        cout<<"Enter your string: ";  
        cin.getline(str,20);  
    }  
    void display() //member function for output  
    {  
        cout<<"String: "<<str;  
    }  
    bool operator ==(String &st) //overloading   
    {  
        if(str==st.str)
        {
            return true;
        }
        else
        {
            return false;
        }

    }  
};  
int main()  
{  
    String str1,str2; //creating three object  
    str1.input();  
    str2.input();  
      
    
    if(str1==str2)
    {
        cout<<"\nEqual";
    }
    else
    {
        cout<<"\nStrings are not equal";
    }
    return 0;
}   
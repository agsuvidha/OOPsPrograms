#include<iostream>
using namespace std;
class demo
{
    int val;
    public:
        demo():val(5){}
        void operator ++(int)
        {
            cout<<"\nval before incrementing "<<val;
            val=val+100;
        }
        void display()
        {
            cout<<"\nValue is "<<val; 
        }
};
int main()
{
    demo d;
    d++;
    
    d.display();
}
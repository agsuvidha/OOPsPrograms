#include<iostream>
using namespace std;
class trial
{
    int num;
    bool ch;
    public:
        trial()
        {
            num=11;
            ch=false;
        }
        void display()
        {
            cout<<"\nNum is "<<num;
            cout<<"\nChoice is "<<(ch==false)?"false":"true";
        }        
        void operator !()
        {
            num=!num;
            ch=!ch;
        }
};
int main()
{
    trial t;
    t.display();
    !t;
    t.display();
    return 0;
}

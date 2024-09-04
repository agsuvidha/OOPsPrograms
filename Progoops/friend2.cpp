#include<iostream>
using namespace std;
class demo
{
    int val;
    friend int add(demo &);
    public:
        demo()
        {
            val=5;
        }
        void display()
        {
            cout<<"Val is "<<val;
        }
};
int add(demo &d)
{
    d.val=d.val+5;
}
int main()
{
    demo d;
    add(d);
    d.display();
}
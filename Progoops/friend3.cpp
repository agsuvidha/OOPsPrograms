#include<iostream>
using namespace std;
class two;
class one
{
    int num1;
    public:
    void set(int x)
    {
        num1=x;
    }
    friend void min(one a, two b);
    
};
class two
{
    int num2;
    public:
    void set(int y)
    {
        num2=y;
    }
    friend void min(one a, two b);
    
};
void min(one a, two b)
{
    if(a.num1<=b.num2)
    {
        cout<<endl<<b.num2<<" is greater\n";
    }
    else
    {
        cout<<endl<<a.num1<<" is greater\n";
    }
}
int main()
{
    one o;
    two t;
    o.set(10);
    t.set(20);
    min(o,t);
}
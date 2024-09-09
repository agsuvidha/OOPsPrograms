#include<iostream>
using namespace std;

class A
{
    int num=5;
    friend class B;
};
class B
{
    public:
        void display(A &a)
        {
            cout<<endl<<a.num;
        }
};
int main()
{
    A a;
    B b;
    b.display(a);
}
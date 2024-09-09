#include<iostream>
using namespace std;
class dosti
{
    int num1;
    protected:
        int num2;
    public:
        dosti()
        {
            num1=10;
            num2=20;
        }
        void display()
        {
            cout<<endl<<num1<<"\t"<<num2;
        }
        friend void calc(dosti&);
};
void calc(dosti &d)
{
    d.num1=100;
    cout<<endl<<d.num1;
}
int main()
{
    dosti d2;
    d2. display();
    calc(d2);
    d2.display();

}
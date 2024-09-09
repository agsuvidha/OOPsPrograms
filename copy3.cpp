#include<iostream>
using namespace std;
class trial
{
    int num1, num2;
    public:
    trial(int x, int y)
    {
        num1=x;
        num2=y;
    }
    void display()
    {
        cout<<"\nNum 1 is "<<num1;
        cout<<"\nNum 2 is "<<num2;
        
    }  
};
int main()
{
    trial t1(3,4);
    trial t2(t1);
    t2.display();
    return 0;
}
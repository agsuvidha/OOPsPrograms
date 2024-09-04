#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator +(Complex &obj)
    {
        Complex c;
        c.real=real+obj.real;
        c.imag=imag+obj.imag;
        return c;
        
    }
    void display()
    {
        cout<<"\n"<<real<<" + i"<<imag;
    }

};
int main()
{
    Complex c1(2,5),c2(4,3),c3;
    c3=c1+c2;
    c3.display();
}
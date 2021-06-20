#include<iostream>
using namespace std;
class complex
{
    public:
        int real,imag;
    void input();
    void display();
    complex operator + (complex);
};
void complex :: input()
{
    cin>>real>>imag;
}
void complex :: display()
{
    cout<<real<<"+i"<<imag;
}
complex complex :: operator +(complex c)
{
    complex c3;
    c3.real = real + c.real;
    c3.imag = imag + c.imag;
    return c3;
}
int main()
{
    complex c1,c2,c3;
    c1.input(); //4+i5
    c2.input(); //3+4i
    c3 = c1+c2; // c1.+(c2)
    c3.display();
    }

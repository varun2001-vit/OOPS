#include<iostream>
using namespace std;
class complex
{
        int real,imag;
public:
    void input();
    void display();
    friend complex operator + (complex,complex);
};
void complex :: input()
{
    cin>>real>>imag;
}
void complex :: display()
{
    cout<<real<<"+i"<<imag;
}
complex operator +(complex c1,complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
int main()
{
    complex c1,c2,c3;
    c1.input(); //4+i5
    c2.input(); //3+4i
    c3 = c1+c2; // c1.+(c2)      +(c1,c2)
    c3.display();
    } 

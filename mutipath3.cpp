#include<iostream>
using namespace std;
class A
{
public:
int a;
};
class B: public A
{
public:
int b;
};
class C: virtual public A
{
public:
int c;
};
class D:public B,public C
{
private:
int d;
public:
void sum()
{
d=a+b+c;
}
void display()
{
cout<<"Sum of a,b,c is: " << d ;
}
};
int main()
{
D d1;

d1.a=10;
d1.b=20;
d1.c=30;
d1.sum();
d1.display();
return 0;
}

#include<iostream>
using namespace std;
class fruit
{
protected:
int a;
public:
void get()
{
cout<<"\n Enter a value:";
cin>>a;
}
};

class mango: virtual public fruit
{
protected:
int b;
public:
void get1() {
cout<<"\n Enter b value";
cin>>b; }};

class orange: virtual public fruit {
protected:
int c;
public:
void get2() {
cout<<"\n Enter c value:";
cin>>c; }};

class apple:public mango,public orange
{
public:
void display()
{
get();
get1();
get2();
cout<<"\n Multiplication value is "<<a*b*c;
}
};

int main() {
apple a;
a.display();
return 0;
}

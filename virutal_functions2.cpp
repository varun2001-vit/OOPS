#include<iostream>
using namespace std;
class shape
{
protected:
int x,y;
public:
void get()
{
cin>>x>>y;
}
/* virtual void area()
{
cout<<"base class";
}*/
virtual void area() = 0; //pure virtual function
};
class rectangle: public shape
{
public:
void area()
{
cout<<x*y;
}

};
class triangle:public shape
{
public:
void area()
{
cout<<0.5*x*y;
}
};
int main()
{
shape *s;
//shape s1;
triangle t;
rectangle r;
s=&t;

s->get();//base class
s->area();
s=&r;
s->get();
s->area();
} c

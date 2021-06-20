#include<iostream>
using namespace std;
class B;
class A
{
int x,y;
public:
void get()
{cout<<"enter dimensions of rectangle";
cin>>x>>y;
}
friend class B;
};
class B
{
public:
void area(A a)
{
cout<<"area of rectangle is"<<(a.x*a.y);
}
};
int main()
{
A aa;
B bb;
aa.get();
bb.area(aa);
}

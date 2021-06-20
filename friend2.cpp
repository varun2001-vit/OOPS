#include<iostream>
using namespace std;
class B;
class A
{
int x;
public:
void getx()
{
cin>>x;
}
friend int add(A,B);
};
class B
{
int y;
public:
void gety()
{
cin>>y;
}
friend int add(A,B);
};
int add(A a,B b)
{
return(a.x+b.y);
}
int main()
{
A aa;
B bb;
aa.getx();
bb.gety();
cout<<"Sum of the members from two classes is"<<add(aa,bb);



}

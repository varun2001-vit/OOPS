#include<iostream>
using namespace std;
class Base
{
int x;
public:
Base(int i)
{
x = i;
cout<<x<<endl;
cout << "Base Parameterized Constructor"<<endl;
}
};



class Derived : public Base
{ int y;
public:
Derived(int j) : Base(j)
{ y = j;
cout<<y<<endl;
cout << "Derived Parameterized Constructor"<<endl;
}
};



int main()
{
Derived d(10) ;
return 0;
}

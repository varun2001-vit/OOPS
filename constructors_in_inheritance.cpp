#include<iostream>
using namespace std;
class Base
{ int x;
public:
Base() //default constructor
{
cout << "Base default constructor"<<endl; }
};



class Derived : public Base
{ int y;
public:
Derived()
{
cout << "Derived default constructor"<<endl;
}
Derived(int i)
{
cout << "Derived parameterized constructor"<<endl; }
};



int main()
{
//Base b;
Derived d1;
Derived d2(10);
}

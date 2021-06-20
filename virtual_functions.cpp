#include<iostream>
using namespace std;
class base
{
public:
int x;
base(int a)
{
x=a;
}
virtual void show()
{
cout<<"value of x"<<x<<endl;
}
};
class derived:public base
{
int y;
public:
derived(int b):base(x)
{
y=b;
}
void show()
{
// base :: show();
cout<<"value of y"<<y<<endl;
}
};
int main()
{
base *ptr; // derived d(20);
base b(10); //d.show();
ptr=&b; //d.base::show();
ptr->show();
derived d(20);
ptr=&d;
ptr->show();
return 0;
}

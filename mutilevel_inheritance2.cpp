#include<iostream>
using namespace std;
class vehicle
{ 
   public:
	char x[20];
	int y;
	void input()
	{
		cout<<"enter name";
		cin>>x;
		cout<<"enter price";
		cin>>y;
	}
	void output()
	{
		
		cout<<"name and price :";
		cout<<x<<y;
	}
	
	
};
class wheeler: public vehicle

{    
    public:
	int z;
	void get()
	{
		vehicle::input();
		cout<<"enter numer of wheels";
		cin>>z;
	}
	void display()
	{
		vehicle::output();
		cout<<" no of wheels="<<z;
	}
};
class car:public wheeler
{
	public:
	char a[23];
	void scan()
	{
		get();
		cout<<"enter model";
		cin>>a;
	}
	void print()
	{
		display();
		cout<<endl;
		cout<< "model ="<<a;
	}
};
int main()
{
	car b;
	b.scan();
	b.print();
}

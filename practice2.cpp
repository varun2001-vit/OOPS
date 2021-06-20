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
class car: public vehicle

{    
    public:
	int z;
	void get()
	{
		vehicle::input();
		cout<<"enter milege";
		cin>>z;
	}
	void display()
	{
		vehicle::output();
		cout<<" milege="<<z;
	}
};
int main()
{
	car b;
	b.get();
	b.display();
}

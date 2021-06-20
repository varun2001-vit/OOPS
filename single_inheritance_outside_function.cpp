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
		cout<<x <<"  "<<y;
	}
	
	
};
class car: public vehicle

{    
    public:
	int z;
	void get()
	{
		
		cout<<"enter milege";
		cin>>z;
	}
	void display()
	{
		
		cout<<" \nmilege="<<z;
	}
};
int main()
{
	car b;
	b.input();
	b.get();
	b.output();
	b.display();
}

#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void getarea()=0;
};
class circle:public shape
{
	public:
	 void getarea()
	 {
	 	int a;
	 	cout<<"enter radius";
	 	cin>>a;
	 	cout<<endl<<3.14*a*a;
	 }
};
class rectangle:public shape
{
	public:
		 void getarea()
		{
			int a,b;
			cout<<"enter a and b";
			cin>>a>>b;
			cout<<endl<<a*b;
			
			
		}
};
int main()
{
	circle a;
	rectangle b;
	a.getarea();
	cout<<endl;
	b.getarea();
}


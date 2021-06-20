#include<iostream>
using namespace std;
class c
{
	public:
		int real,imag;
		c()
		{
			real=0;
			imag=0;
		}
		void input()
		{
			cout<<"enter real";
			cin>>real;
			cout<<"enter imag";
			cin>>imag;
		}
		c operator +(c obj)
		{
			c temp;
			temp.real=real+ obj.real;
			temp.imag=imag+obj.imag;
			return temp;
		}
		c operator -(c obj)
		{
			c temp;
			temp.real=real- obj.real;
			temp.imag=imag-obj.imag;
			return temp;
		}
		void operator >(c obj)
		{
			
			if (real>obj.real && imag>obj.imag)
			    cout<<"first is bigger";
			else if(real>obj.real && imag<obj.imag)
			    cout<<" first is bigger";
			else
			   cout<<"second is bigger";
			
		}
		void operator ==(c obj)
		{
			
			if (real==obj.real && imag==obj.imag)
			    cout<<"equal";
			else
			   cout<<"not equal";
			
		}
		
		
		
};
int main()
{
	c a,b,d,e;
	a.input();
	b.input();
	d=a+b;
	e=a-b;
	cout<<a>b;
	cout<<a==b;
	return 0;
	
}

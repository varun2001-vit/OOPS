#include<iostream>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<" base show ";
		}
		virtual void print()
		{
			cout<<"base print ";
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<" derived show ";
		}
		 void print()
		{
			cout<<"derived print ";
		}
};
int main()
{
	base *ptr;
	derived a;
	ptr=&a;
	ptr->print();
	ptr->show();
}



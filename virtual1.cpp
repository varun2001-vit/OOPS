#include<iostream>
using namespace std;
class base
{
	public:
		void show()
		{
			cout<<"base show"<<endl;
		}
		virtual void print()
		{
			cout<<"base print"<<endl;
		}
	
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"derivedshow"<<endl;
		}
		virtual void print()
		{
			cout<<"derived print"<<endl;
		}
	
};
int main()
{
	base *ptr;
	derived obj;
	ptr=&obj;
	ptr->print();
	ptr->show();
}


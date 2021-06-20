#include<iostream>
using namespace std;
template<class t,class u>
class calculator
{  
	public:
		t a;
		u b;
	public:
		void input()
		{
			cout<<"enter t and b";
			cin>>a>>b;
		}
		void output()
		{
			cout<<a<<" "<<b;
		}
		void add();
		void sub()
		{
			cout<<a-b<<endl;
		}
};
template<class t,class u>
void calculator<t,u>::add()
{
	cout<<a+b;
}
int main()
{
	calculator<int ,int>obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.output();
}



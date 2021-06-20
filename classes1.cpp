#include<iostream>
using namespace std;
class stud
{
	string reg;
	string name;
	int age;
	public:
	void get()
	{cout<<"enter detailes"<<endl;
	cin>>reg>>name>>age;
	}
	void print()
	{cout<<"details are"<<endl;
	cout<<reg<<" "<<name<<" "<<age;
	}
};
int main()
{
	stud s;
	s.get();
	s.print();
}
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
	stud s[3];
	for(int i=0;i<3;i++)
	{
	 s[i].get();
    }
    for(int i=0;i<3;i++)
	{
	 s[i].print();
	 cout<<endl;
    }
}

#include<iostream>
using namespace std;
class stu
{
	protected:
		char id[20];
		char name[20];
	public:
		void getstu();
		
};
class sports
{
	protected:
		int spmarks;
	public:
		void getsports();
		
};
class marks:public stu
{
	public:
	int sub1,sub2,sub3;
	void getmarks()
	{
		
		cin>>sub1>>sub2>>sub3;
	}
	
};
class result:public marks ,public sports
{
	public:
	void display()
	{
		cout<<id<< " "<<name<<" "<<sub1+sub2+sub3<< " "<<spmarks;
	}
};
void sports::getsports()
{
	cin>>spmarks;
}
void stu::getstu()
{
	cin>>id>>name;
}
int main()
{
	result r;
	r.getstu();
	r.getmarks();
	r.getsports();
	r.display();
		
}

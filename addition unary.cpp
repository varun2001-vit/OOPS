#include<iostream>
using namespace std;
class marks
{
	int sub1,sub2,sub3;
	public:
		void input()
		{
			cout<<"enter the marks";
			cin>>sub1>>sub2>>sub3;
		}
		void operator ++()
		{
			sub1=sub1+1;
			sub2=sub2+1;
			sub3=sub3+1;
		}
		
		void operator --()
		{
			sub1=sub1-1;
			sub2=sub2-1;
			sub3=sub3-1;
			
		}
		void output()
		{
			cout<<sub1<<" "<<sub2<<" "<<sub3;
		}
		
};
int main()
{
	marks stud;
	stud.input();
	++stud;
	stud.output();
	--stud;
	stud.output();
	
	
}

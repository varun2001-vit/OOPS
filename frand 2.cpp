#include<iostream>
using namespace std;
class B;
class  A
{
	int x,y;
	public:
		void input()
		{
			cout<<"enter x and y";
			cin>>x>>y;
		}
		friend class B;
};
class B
{
	public:
	float area(A a)
	{
		return a.x*a.y;
	}
	
};
int main()
{
	A p;
	B q;
	p.input();
	cout<<"area is "<<q.area(p);
	
}

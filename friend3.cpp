#include<iostream>
using namespace std;
class b;
class a;
class a
{
	int x,y;
public:
	void input(void)
	{
		cout<<"enter x,y of class a";
		cin>>x>>y;
	}
	friend int add(a,b);
	friend int sub(a,b);
	
};
class b
{
	int p,q;
public:
	void input(void)
	{
		cout<<"enter p.q of class b";
		cin>>p>>q;
	}
	friend int add(a,b);
	friend int sub(a,b);
	
};
int add(a A,b B)
{
	return (A.x+B.p);
}
int sub(a A,b B)
{
	return (A.y-B.q);
}
int main()
{
	a i;
	b u;
	i.input();
	u.input();
	cout<<"add is"<<add(i,u)<<endl;
	cout<<"sub is"<<sub(i,u)<<endl;
	
}

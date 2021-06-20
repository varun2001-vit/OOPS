#include<iostream>
 using namespace std;
class a
{  public:
	int x;
	public:
	void getx()
	{   cout<<"enter for class A";
		cin>>x;
	}
};
class b
{   public:
	int y;
	public:
	void gety()
	{   cout<<"enter for class B";
		cin>>y;
	}
};
class c: public a,public b
{   public:
	int z;
	public:
	void getz()
	{   getx();
	    gety();
	    cout<<"enter for class c";
		cin>>z;
	}
	void printz()
	{
		cout<<x<<" "<<y<<" "<<z;
	}
};
int main()
{
	c d;
	d.getz();
	d.printz();
}


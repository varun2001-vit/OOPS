 #include<iostream>
using namespace std;
class area
{
	int x;
public:
	void input()
	{
		cin>>x;
	}
	area()
	{
		x=4;
	}
	friend float ar(area);
	void output()
	{
		cout<<"area not using friend "<<3.14*x*x;
	}
};
float ar(area a1)
{
	return 3.14*a1.x*a1.x;
}
int main()
{
	area b;
	b.input();
	b.output();
	cout<<endl;
	cout<<"area  using friend is "<<ar(b);
}
  

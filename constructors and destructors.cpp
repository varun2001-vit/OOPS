#include<iostream>
using namespace std;
class sample
{
	int x,y;
public:
	sample()//default
	{
	x=2;
	y=3;
	cout<<" default constructor ";
	}
	sample(int a,int b)//parameterized
	{
		x=a;
		y=b;
	cout<<" parameterized constructor ";
	}
	~sample()
	{
	cout<<" destructor ";
	}
	sample(sample &ss)//copy construtor
	{
		x=ss.x;
		y=ss.y;
	cout<<"  copy constructor";
	}
void output()
{
cout<<endl<<x<<endl<<y;
}
};
int main()
{
	sample s;
	sample s1(9,39);
	sample s2(s);
	sample s3=s1;
	cout<<endl<<"s\n";
	s.output();
	cout<<endl<<"s1\n";
	s1.output();
	cout<<endl<<"s2\n";
	s2.output();
	cout<<endl<<"s3\n";
	s3.output();
	return 0;
}

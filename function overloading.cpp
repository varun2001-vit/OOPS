#include<iostream>
using namespace std;
int add(int a ,int b)
{
	return a+b;
}
float add(double a,double b)
{
	return a+b;
}
float add(double a,int b)
{
	return a+b;
}

float add(double a)
{
	return a+2;
}
float add(int a)
{
	return a+2;
}
int main()
{
	cout<<add(5,6)<<endl<<add(4.5,6.4)<<endl<<add(5.6,11)<<endl<<add(5.6)<<endl<<add(3);
	return 0;
}




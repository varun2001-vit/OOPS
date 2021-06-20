#include<iostream>
using namespace std;
template<class T,class U>
float add(T a,U b)
{
	return (a+b);
}
int main()
{
	
	cout<<add(3.4f,4.2f)<<endl;
	cout<<add(3.4f,2)<<endl;
	cout<<add(2,3.4f)<<endl;
	
	
}

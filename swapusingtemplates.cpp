#include <iostream>
#include <string>
using namespace std;
template <class T>
void  swap (T a, T b) 
{
	cout<<a<<b<<endl;
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<b;
}
int main () 
{
	swap(20,30);
	cout<<endl;
	swap('a','b');
	cout<<endl;
	swap(20.2,30.4);
}



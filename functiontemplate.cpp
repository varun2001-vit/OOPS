#include<iostream>
using namespace std;
#include<string>
template <class T,class U>
T product( T a,U b)
{
	return(a*b);
}
int main()
{
	
	cout<<product(2,3.5)<<" "<<product(2.5,3.5)<<" "<<product(3.5,3);
	
}

#include<iostream>
using namespace std;
template<class t>
void large(t a[],int n)
{
	 t max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"largest is"<<max;
}
int main()
{
	int a[10]={1,2,3,4,5,8,7,9,10,6};
	float b[10]={1.1,2.2,3.3,15.4,5.6,3.8,2.6,3.1,3.2,7.6};
	char c[10]={'a','b','c','d','f','x','w','z','i','v'};
	int n=10;
	large(a,n);
	cout<<endl;
	large(b,n);
	cout<<endl;
	large(c,n);
	
	
	return 0;
}



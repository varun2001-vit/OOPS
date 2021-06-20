#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int el;
	stack<int> a;
	stack<int>b;
	b.push(2);
	b.push(3);
	b.push(4);
	b.push(5);
	b.push(7);
	cout<<"enter the no of elements\n";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter elements";
		cin>>el;
		a.push(el);
		
		
	}
cout<<endl;

	while(!a.empty())
	{
		cout<<a.top()<<"-->";
		a.pop();
	}
cout<<endl;
swap(a,b);
	while(!a.empty())
	{
		cout<<a.top()<<"-->";
		a.pop();
	}
	
	
}


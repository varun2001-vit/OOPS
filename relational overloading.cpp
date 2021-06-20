#include<iostream>
using namespace std;
class compare
{
	int km,m;
	public:
		void input()
		{
			cout<<"enter km and m";
			cin>>km>>m;
		}
		bool operator >(compare s)
		{
			if(km>s.km && m>s.m)
			{
				return true;
			}
			else if( km>s.km && m<s.m)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
};
int main()
{
	compare s1,s2;
	s1.input();
	s2.input();
	if(s1>s2)
	{
		cout<<" dist 1 is greater";
	}
	else
	{
		cout<<"dist 2 is greater";
	}
}
	

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;//vactor a is created
	a.push_back(1);// elements are being added from back
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	for(int i=0;i<a.size();i++)//first method to display
	{
		cout<<a[i]<<" ";
	}
cout<<endl;
vector<int>::iterator i;//declaring iterator
for(i=a.begin();i!=a.end();i++)//second method
{
cout<<*i<<" ";//display
}
cout<<endl;
for(int j=a.size()-1;j>=0;j--)//reverse
{
cout<<a[j]<<" ";//display
}
cout<<"alt value";
cout<<a.at(2);
///deleting the elements using iterators
a.erase(a.begin(),a.begin()+2);
cout<<endl;
for(int i=0;i<a.size();i++)//first method to display
	{
		cout<<a[i]<<" ";
	}


if(a.empty())
{
	cout<<"empty";
}
else
{
	cout<<"not empty";
}
cout<<endl;
a.clear();//clears entire
if(a.empty())
{
	cout<<"empty";
}
else
{
	cout<<"not empty";
}

return 0;
}

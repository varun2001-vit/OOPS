#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{ string a;
  int m;
	map<string,int>marks;
	for(int i=0;i<4;i++)
	{
		cout<<"enter name";
		cin>>a;
		cout<<"enter marks";
		cin>>m;
		marks[a]=m;
	}
map<string,int>:: iterator i;
  for(i=marks.begin() ;i!=marks.end();i++)
  {
  	cout<<(*i).first<<" ="<<(*i).second<<"\n";
  }
return 0;
cout<<marks.find("varun")->second;
}

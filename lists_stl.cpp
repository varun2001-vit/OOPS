#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l)
{
	list<int>::iterator j;
	for(j=l.begin();j!=l.end();j++)
     {
	 cout<<*j<<" ";//display
    }
    cout<<endl;
}
	
int main()
{
	list<int>a;
	a.push_back(5);
	a.push_back(7);
	a.push_back(6);
	a.push_back(3);
	a.push_back(1);
	a.push_back(2);
	display(a);
	a.sort();
	display(a);
	a.reverse();
	display(a);
	
	// removing
	a.pop_back();
	display(a);
	a.pop_front();
	display(a);
	a.remove(7);
	display(a);
}

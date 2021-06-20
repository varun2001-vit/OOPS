#include<iostream>
using namespace std;
class area
{
int lenght;
int bredth;
float result;
public:
void input();
int calculate();
void output();
};
void area::input()
{
	cout<<"enter lenght bredth";
	cin>>lenght>>bredth;
}
void area::output()
{
	cout<<lenght<<bredth<<endl;
	cout<<result;
}
int area::calculate()
{
	result=lenght*bredth;
	return result;
}
int main()
{area a;
int area;
a.input();
area=a.calculate();
cout<<area<<endl;
a.output();
return 0;
}

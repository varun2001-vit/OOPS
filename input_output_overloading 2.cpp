#include<iostream>
using namespace std;
class add
{
int a,b;//a,b a,b a+a
public:
//void getab();
add operator +(add x);
// void display();
friend ostream &operator <<(ostream &out ,add &ad);
friend istream &operator >>(istream &in ,add &ad);
};
istream & operator >>(istream & in , add &ab)
{
in>>ab.a;
in>>ab.b;
//return in;

}
ostream & operator <<(ostream & out , add &ab)
{

out<<ab.a;
out<<ab.b;

}
/*void add::getab()
{
cin>>a>>b;
}*/
add add::operator +(add x)
{
add temp;
temp.a=a+x.a;
temp.b=b+x.b;
return temp;
}
/*void add::display()
{
cout<<a<<endl<<b<<endl;
}*/



int main()
{
add obj1;
add obj2;
//obj1.getab();
//obj2.getab();
cin>>obj1;//a,b
cin>>obj2;//a,b
obj1=obj1+obj2; //obj1.+(obj2)
cout<<obj1;
//obj1.display();


}

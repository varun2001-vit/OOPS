#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
class BC
{
T1 a;
T2 b;
T3 c,d;

public:
void getdata()
{
cout<<"enterdata\n";
cin>>a;
cin>>b;
}
T3 add()
{
c=a+b;

}
T3 mul()
{
d=a*b;

}
void putdata()
{
cout<<a<<"\n";
cout<<b<<"\n"<<c<<d<<"\n";
}
};
template<class V1,class V2,class V3>
class DC:public BC<V1,V2,V3>
{
V1 c;
V2 d;
V3 e;
public:
void read()
{
cout<<"enter more\n";
cin>>c;
cin>>d;

}
V3 sub()
{
e=c-d;

}
void put()
{
cout<<c<<"\n";
cout<<d<<"\n"<<e<<"\n";

}
};
main()
{
DC <int,float,float>d1;
d1.getdata();
d1.add();
d1.mul();
d1.putdata();
d1.read();
d1.sub();
d1.put();
DC <float,int,float>d2;
d2.getdata();
d2.add();
d2.putdata();
d2.read();
d2.sub();
d2.put();
}

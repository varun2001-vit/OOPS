#include <iostream>
using namespace std;
class B;
class A
{
    int x,y;
    public:
    void input()
    {
        cout<<"enter x and y";
        cin>>x>>y;
    }
    friend int add(A,B);
};
class B
{
    int p,q;
    public:
    void input()
    {
        cout<<"enter p and q";
        cin>>p>>q;
    }
    friend int add(A,B);

};
int add(A r,B s)
{
    cout<<r.x+r.y<<endl;
    cout<<s.p+s.q<<endl;
}
int main()
{
    A a;
	B b;
    a.input();
    b.input();
    add(a,b);
   return 0;

}

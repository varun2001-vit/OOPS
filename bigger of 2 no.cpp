#include<iostream>
using namespace std;
 inline int larger(int ,int,int);
int main()
{ int a=10,b=7,c=40;
c=larger(a,b,c);
cout<<c;
return 0;
}
 inline int larger(int a,int b,int c)
{if (a>b && a>c)
return a;
else if(b>c && b>a)
return b;
else
return c;
 }
  

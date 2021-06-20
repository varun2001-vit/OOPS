#include<iostream>
using namespace std;
int main()
{int a[5],b;
cout<<"enter the element";
cin>>b;
cout<<"enter the array elements";
for(int i=0;i<5;i++)
{cin>>a[i];
}
for(int i=0;i<5;i++)
{if(a[i]==b)
{
cout<<"position is"<<i+1;
break;
}
}
cout<<"\n"<<b;
return 0;
}

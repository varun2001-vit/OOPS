#include<iostream>
using namespace std;
#define n 10
int start=0,end=n-1;
int main()
{int a[10],b;
cout<<"enter the element";
cin>>b;
cout<<"enter the array elements";
for(int i=0;i<n;i++)
{cin>>a[i];
}
int mid;
while(start<=end)
{mid=(start+end)/2;
if(a[mid]==b)
{
cout<<("found");
break;
}
else if(a[mid]<b)
start=mid+1;
else if(a[mid]>b)
end=mid-1;
}
if (start> end)
cout<<"Not found!isn't present in the list.\n";
}

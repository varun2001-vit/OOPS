#include<iostream>
using namespace std;
struct tender
{
    float amount;
    char add[30];
    char reg[20];
    
 };
int main()
{  int n,z;
    float m=0;
    struct tender a[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].reg;
        cin>>a[i].add;
        cin>>a[i].amount;
    }
    for(int i=0;i<n;i++)
    {
        m=0;
        if(a[i].amount<m)
        {
            m=a[i].amount;
            
        }
       
    }

for(int i=0;i<n;i++)
    {
       if(m==a[i].amount)
       {
          cout<<a[i].reg<<endl;
          cout<<a[i].add;
        
       }
    }
return 0;
    
}

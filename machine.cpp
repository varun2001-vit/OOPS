#include<iostream>
using namespace std;
int main()
{
    int code[20];
    int price[20];
    int stock[20];
    int n,a,b;
    int flag=0;
    cin>>n;
    while(n>0)
{
    for(int i=0;i<n;i++)
    {
        cin>>code[i];
        cin>>price[i];
        cin>>stock[i];
        
    }
    cin>>a;
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(code[i]==a)
        {
            flag=1;
            if(b>price[i])
            {
                if(stock[i]>0)
                {
                   cout<<code[i]; 
                }
                else
                {
                    cout<<"Less Stock";
                }
                
            }
            cout<<"Insufficient amount";
        }
    }
    if(flag==0)
    {
        cout<<"Wrong item code";
    }
}
return 0;
    
}

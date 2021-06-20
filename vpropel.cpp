#include<iostream>
using namespace std;
class customer
{
    public:
    char name[20];
    char mob[20];
    char id[20];
    int n;
    int bill[30];
    public:
    void get()
    {
        cin>>name>>mob>>id>>n;
        for(int i=0;i<n;i++)
        {
            cin>>bill[i];
        }
    }
    int calc_Total()
    {
        float sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+bill[i];
        }
        return sum;
        
    }
};
class  preferred_Customer
{
    public:
    char name[20];
    char mob[20];
    char id;
    int n;
    int bill[30];
    public:
    void get()
    {
        cin>>name>>mob>>id>>n;
        for(int i=0;i<n;i++)
        {
            cin>>bill[i];
        }
    }
    int calc_Total()
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+bill[i];
            if(sum> 5000)
            {
                sum=sum-bill[i];
                sum=sum+0.01*bill[i];
            }
            else if(sum>10000)
            {
                sum=sum-bill[i];
                sum=sum+0.02*bill[i];
            }
            else if(sum>15000)
            {
                sum=sum-bill[i];
                sum=sum+0.03*bill[i];
            }
            else if(sum>20000)
            {
                sum=sum-bill[i];
                sum=sum+0.04*bill[i];
            }
            
        }
        return sum;
        
    }
};
int main()
{
	int ch;
	//get choice of customer
	cin>>ch;
	if(ch==0)
	{
	customer c1;
	//get the details of customer
	c1.get();
	//calculate total amount to be paid
	//develop a function in customer class that will calculate 
	// the total amount and return it
	cout<<c1.calc_Total();
	}
	else
	{
	//preferred customer
	preferred_Customer pc;
	//get details
	pc.get();
	//function should calculate and return total amount
	cout<<pc.calc_Total();
	}
}

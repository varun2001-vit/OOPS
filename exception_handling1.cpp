#include<iostream>
#include<string>
using namespace std;
int main()
{
    int code[20];
    int price[20];
    int stock[20];
    float n,a,b;
    int flag=0;
    cin>>n;
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
    	try
    	{
		
        if(code[i]==a)
        {
            flag=1;
        }
        else
        {
        	throw 0;
		}
        if(b>price[i] && flag==1)
            {
                if(stock[i]>0)
                {
                   cout<<code[i]; 
                   break;
                }
                else 
                {
                    throw "kam";
                    
                }
            }
            else
            {
			throw 1.1;
			}
                
        }
       
            
        }

    catch (int i)
    {
        cout<<"Wrong item code";
        
    }
    catch( double i)
    {
    	cout<<"Insufficient amount";
	}
	 catch(string c)
	 {
        cout<<"Less stock"<<endl;
	}
return 0;
    
}

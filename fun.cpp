#include<iostream>
using namespace std;
class time
{
    public:
    int h;
    int m;
    void input()
    {
        cin>>h>>m;
    }
    void operator ++()
    {
    	
    		if( h>0 && m>0 && m<59)
			{
			h=h+1;
    		m=m+1;
			}
    		else if (h>0 && m==59)
    		{
    			h=h+2;
    			m=m+1;
    			m=m-60;
			}
		
    }
    void display()
    {
        cout<<h<<":"<<m;
    }
};
int main()
{
    time u;
    u.input();
    ++u; 
    u.display(); 
   
}

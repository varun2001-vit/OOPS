#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		
	complex(){
        real = imag = 0;
    }
    void input(){
        cin>>real;
        cin>>imag;
    }
    void ouput()
	{
        cout<<real<<" + i"<<imag<<endl;
    }
    complex operator +(complex c)
    {
    	complex temp;
    	temp.real=real+c.real;
    	temp.imag=imag+c.imag;
    	return temp;
    	
	}
    
};
int main()
{
	complex c,d,e;
	c.input();
	d.input();
	e=c+d;
	e.ouput();
	
	
	
}

	


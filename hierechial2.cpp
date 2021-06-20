#include <iostream>  
using namespace std;  
class Shape                 // Declaration of base class.  
{  
    public:  
    void get_data(int n,int m)
    {
    	cout<<"base";
	}
      
};  
class Rectangle : public Shape  // inheriting Shape class  
{  
    public:  
    int rect_area( int a ,int b )  
    {  
        int result = a*b;  
        return result;  
    }  
};  
class Triangle : public Shape    // inheriting Shape class  
{  
    public:  
    int triangle_area( int a ,int b)  
    {  
        float result = 0.5*a*b;  
        return result;  
    }  
};  
int main()  
{  int a,b;
     Rectangle r;
     Triangle  t;
     a=r.rect_area(20,30);
     b=t.triangle_area(20,30);
     cout<<a;
     cout<<b;
     return 0;  
}  

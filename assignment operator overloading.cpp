#include<iostream>
using namespace std;
 
class rope
{
    public:
        int metre,cm;
    void get()
    {
        cin>>metre>>cm;
    }

    bool operator ==(rope r)
    {
        if(metre==r.metre &&cm==r.cm)
        {
            return true;
        }
        else
        {
            return false;
        }

    }    
};
 
int main()
{
    rope r1,r2;
    r1.get();
    r2.get();
    if(r1==r2)
    {
        cout<<"ropes are of equal length";
    }
    else
    {
        cout<<"ropes are of unequal lengths";
    }
}

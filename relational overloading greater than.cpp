#include<iostream>
using namespace std;
class height
{
    public:
        int feet,inches;
    void get()
    {
        cin>>feet>>inches;
    }
    bool operator > (height h)
    {
        if(feet>h.feet)
        return true;
        else if (feet==h.feet && inches > h.inches)
        return true;
        else
        return false;

    }
};
int main()
{
    height h1,h2;
    h1.get();
    h2.get();
    if(h1 > h2) //h1 and h2 are objects  h1.>(h2)
      cout<<"First one is taller";
    else
       cout<<"Second one is taller";

}
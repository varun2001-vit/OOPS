#include<iostream>
using namespace std;
class distance
{
    public:
        int kms,m;
    void get()
    {
        cin>>kms>>m;
    }
    bool operator == (distance h)
    {
        if(kms==h.kms && m==m.kms)
        return true;
        else
        return false;

    }
};
int main()
{
    distance h1,h2;
    h1.get();
    h2.get();
    if(h1 == h2) //h1 and h2 are objects  h1.>(h2)
      cout<<"they are equal";
    else
       cout<<"they are not equal";

}

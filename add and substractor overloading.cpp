#include<iostream>
using namespace std;
class c{
    int real;
    int imag;
    public:
    c(){
        real = imag = 0;
    }
    void input(){
        cin>>real;
        cin>>imag;
    }
    void ouput(){
        cout<<real<<" + i"<<imag<<endl;
    }
    c operator +(c obj){
        c temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    c operator -(c obj){
        c temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
};
int main(){
    c c1,c2,res,res1;
    cout<<"Enter the first complex number"<<endl;
    c1.input();
    cout<<"Enter the second complex number"<<endl;
    c2.input();
    res = c1+c2;
    res1 = c1-c2;
    res.ouput();
    cout<<endl;
    res1.ouput();
    return 0;
}

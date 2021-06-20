#include<iostream>
using namespace std;
class staff
{
private:
char name[50];
int code;
public:
void getdata();
void display();
};



class typist: public staff
{
private:
int speed;
public:
void getdata();
void display();
};



void staff::getdata()
{
cout<<"Name:";
cin>>name;
cout<<"Code:";
cin>>code;
}



void staff::display()
{
cout<<"Name:"<<name<<endl;
cout<<"Code:"<<code<<endl;
}



void typist::getdata()
{
staff::getdata();//fetch the data of base class
cout<<"Speed:";
cin>>speed;//get the data of derived class
}



void typist::display()
{
staff::display();
cout<<"Speed:"<<speed<<endl;
}



int main()
{
typist t;
cout<<"Enter data"<<endl;
//t.staff::getdata();
t.getdata();
cout<<endl<<"Display data"<<endl;
// t.staff::display();
t.display();

return 0;
}

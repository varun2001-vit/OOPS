#include <iostream>
using namespace std;
class person /*Parent class*/
{
private:
char name[100],gender[10];
protected:
int age;
public:
void getinput();
void display();
};



class student: public person /*Child class*/
{
private:
char college_name[100];
public:
void getdata();
void putdata();
};
class major:public student
{
private:
char program[50];
int no_of_years;
public:
void get();
void put();
};



void person::getinput()
{
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the Gender: ";
cin>>gender;
cout<<"Enter the Age: ";
cin>>age;
}



void person::display()
{
cout<<"Name : "<<name<<endl;
cout<<"Gender : "<<gender<<endl;
cout<<"Age : "<<age<<endl;
}



void student::getdata()
{
person::getinput();
cout<<"Enter the College Name: ";
cin>>college_name;
}



void student::putdata()
{
person::display();
cout<<"College : "<<college_name<<endl;
}
void major::get()
{
student::getdata();
cout<<"Enter the Program Name: ";
cin>>program;
cout<<"Enter the No of Years of study: ";
cin>>no_of_years;
}



void major::put()
{
student::putdata();
cout<<"Program Name : "<<program<<endl;
cout<<"Years of Study:"<<no_of_years<<endl;
}



int main()
{
major m;
cout<<"Input data"<<endl;
m.get();
cout<<endl<<"Display data"<<endl;
m.put();
return 0;
}

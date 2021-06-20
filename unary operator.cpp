#include <iostream>
using namespace std;
class time
{
int h;
int min;
public:
void gettime()
{
cout<<"enter hours:";
cin>>h;
cout<<"enter minutes:";
cin>>min;
}
void operator ++()
{
if(min>=59)
{
min=0;
h+=2;
}
else if(min>=0 and min<59)
{
	h=h+1;
min+=1;
}
}
void showtime()
{
if(0<=min && min<=9)
{
cout<<h<<": 0"<<min;
}
else
{
cout<<h<<":"<<min;
}
}
};
int main() {
time t;
t.gettime();
++t;
t.showtime();
return 0;
}

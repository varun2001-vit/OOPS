#include<iostream>
using namespace std;
class human
{
	public:
		void breathing()
		{
			cout<<" I am breathinig";
		}
		
};
class youtuber : public  virtual human
{
	;
};
class engineer:  public virtual   human
{
;
};
class varun: public youtuber, public engineer
{
;
};
int main()
{
	varun s;
	s.breathing();
	return 0;
} 

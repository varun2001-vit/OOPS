#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string,int>marks;
	marks["shobhit"]=94;
	marks["sid"]=90;
	marks["varun"]=95;
	marks["sony"]=96;
  map<string,int>:: iterator i;
  for(i=marks.begin() ;i!=marks.end();i++)
  {
  	cout<<(*i).first<<" ="<<(*i).second<<"\n";
  }
  marks.insert({"ram",98});
  for(i=marks.begin() ;i!=marks.end();i++)
  {
  	cout<<(*i).first<<" ="<<(*i).second<<"\n";
  }
cout<<endl;
cout<<"size is"<<marks.size()<<endl;
cout<<"size  max is"<<marks.max_size()<<endl;
cout<<" empty is"<<marks.empty()<<endl;
cout<<marks.at("varun");
  
return 0;

}


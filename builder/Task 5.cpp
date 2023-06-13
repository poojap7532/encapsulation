#include<iostream>

//5. WAP to create a class which have both static data member and static member function. 
//That class gives details of all states in India.
using namespace std;

class state{
	private:
		static int ;
		int id=1;
	public:
	   void getter1(){
//	   	count++;
	   	cout<<id<<endl;
	   }	
	   void setter(){
	   	count++;
	   	cout<<count<<endl;
	   }	
};

int state::count=0;

int main(){
	
	state obj;
	obj.getter();
	obj.setter();
	return 0;
}

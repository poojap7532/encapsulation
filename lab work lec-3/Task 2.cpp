#include<iostream>

//2. WAP to get and display N numbers of Fast Food cafe
//information using encapsulation and use of default
//constructor by including below mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity


using namespace std;

class Food{
	private:
		char rat[100];
		static char loc[200];
		int year;
		int staff;
	public:
	    void setter(){
	    	cout<<"Enter Ratings(1star,2star,3star...) :";
	    	cin>>rat;
	    	
	    	cout<<"Enter Establish Year :";
	    	cin>>year;
	    	
	    	cout<<"Enter staff quantity :";
	    	cin>>staff;
		}
		void getter(){
			cout<<endl<<"Ratings : "<<rat<<endl<<endl;
			cout<<"City Nmae : "<<loc<<endl<<endl;
			cout<<"Establish year :"<<year<<endl<<endl;
			cout<<"Staff Quantity :"<<staff<<endl<<endl;
		}
		
	    Food(){
	    	cout<<"Id : 123"<<endl<<endl;
	    	cout<<"Cafe Name : Max Cafe"<<endl<<endl;
	    	cout<<"Type : Rooftop"<<endl<<endl;
		}		
		
};
char Food :: loc[]="Surat";

int main(){
	Food obj;
	
	obj.setter();
	obj.getter();
	
	return 0;
}

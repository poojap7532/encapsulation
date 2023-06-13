#include<iostream>
#include<string.h>
//1. WAP to get and display N numbers of Diamond
//companies information using encapsulation and use of
//parameterised constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

using namespace std;
	
class Diamond{
	private:
		int rev;
		int staff;
		int imp;
		int exp;
	public:
		void setter(){
		        cout<<"Revenue per year :";
				cin>>rev;
				   
				cout<<"Staff Quantity :";
				cin>>staff;
				
				cout<<"Import per year of Diamond :";
				cin>>imp;
				
				cout<<"Export per year of Diamond :";
				cin>>exp;	
		}
		void getter(){
			    cout<<"Revenue per year :"<<rev<<endl<<endl;
	    	    cout<<"Staff Quantity :"<<staff<<endl<<endl;
	    	    cout<<"Import per year of Diamond :"<<imp<<endl<<endl;
	    	    cout<<"Export per year of Diamond :"<<exp<<endl<<endl;
		}
	    Diamond(int id,char name[],char ceo[]){
	    	    cout<<"Id :"<<id<<endl<<endl;
	    	    cout<<"Company Name :"<<name<<endl<<endl;
				cout<<"Company Ceo : "<<ceo<<endl<<endl;
		}	
};

int main(){
	
	Diamond obj(234,"Digital Games","Recherjack");
	
	obj.setter();
	obj.setter();
	
	
	
	return 0;
}


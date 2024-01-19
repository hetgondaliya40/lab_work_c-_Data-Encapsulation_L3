/*
1. WAP to get and display N numbers of Diamond
companies information using encapsulation and use of
parameterised constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)
*/

#include<iostream>
#include<string.h>
using namespace std;

class Diamond{
	private :
		
		int comp_id;
		char comp_name[100];
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		char comp_ceo[100];
	
	public :
		Diamond (int n,char n1,int n2,int n3,int n4,int n5,char n6){
			this->comp_id = n;
			this->comp_name[100] = n1;
			this->comp_staff_quantity = n2;
			this->comp_revenue = n3;
			this->comp_import_raw_diamonds =n4;
			this->comp_export_diamonds = n5;
			this->comp_ceo[100] = n6;
			this->getdata();
		}
		void getdata(){
			cout<<"ID is :"<<this->comp_id<<endl;
			cout<<"COMP NAME is :"<<this->comp_name<<endl;
			cout<<"COMP STAFF QUANTITYY is :"<<this->comp_staff_quantity<<endl;
			cout<<"COMP REVENUE is :"<<this->comp_revenue<<endl;
			cout<<"COMP IMPORT RAW DIAMONDS is :"<<this->comp_import_raw_diamonds<<endl;
			cout<<"COMP EXPORT DIAMONDS is :"<<this->comp_export_diamonds<<endl;
			cout<<"COMP CEO is :"<<this->comp_ceo<<endl;
		}
	
	
	};

int main(){
	int i,a;
	
	cout << "Enter count of comp :"<<endl;
	cin>>a;
	
	for(i=0;i<a;i++){
		int comp_id;
		char comp_name[100];
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		char comp_ceo[100];
		
		cout<<"Enter id : "<< endl;
		cin>>comp_id;
		cout<<"Enter NAME : "<< endl;
		cin>>comp_name;
		cout<<"Enter STAFF QUANTITYY : "<< endl;
		cin>>comp_staff_quantity;
		cout<<"Enter REVENUE : "<< endl;
		cin>>comp_revenue;
		cout<<"Enter IMPORT RAW DIAMONDS : "<< endl;
		cin>>comp_import_raw_diamonds;
		cout<<"Enter EXPORT DIAMONDS : "<< endl;
		cin>>comp_export_diamonds;
		cout<<"Enter CEO : "<< endl;
		cin>>comp_ceo;
	
//	Diamond d(n,n1,n2,n3,n4,n5,n6);
	Diamond d(comp_id,comp_name[100],comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_ceo[100]);
}
	return 0;

}

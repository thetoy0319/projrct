//2. WAP to get and display 5 Customers information using encapsulation.

#include<iostream>

using namespace std;

class Customer{
	
	private:
		int cust_id;
		char cust_name[50];
		int cust_age;
		char cust_telecome_brand_name[50];
		double cust_mobile_number;
		char cust_city[50];
		int cust_simcard_validity;
		
		public:
			void setter(){
				
				cout<<"Enter Customer ID : ";
 				cin>>cust_id;
 		
 				cout<<"Enter Customer Name : ";
 				cin>>cust_name;
 		
 				cout<<"Enter Customer Age : ";
 				cin>>cust_age;
 		
 				cout<<"Enter Customer telecome brand name (like Jio, Airtel, Vi, etc.): ";
 				cin>>cust_telecome_brand_name;
 				
 				cout<<"Enter Customer mobile number : ";
 				cin>>cust_mobile_number;
 		
 				cout<<"Enter Customer City : ";
 				cin>>cust_city;
 		
 				cout<<"Enter Customer simcard validity (in years): ";
 				cin>>cust_simcard_validity;
			}
			
			void getter(){
				
				cout<<"\nCustomer ID : "<<cust_id<<endl<<endl;
				cout<<"Customer Name : "<<cust_name<<endl<<endl;
				cout<<"Customer Age : "<<cust_age<<endl<<endl;
				cout<<"Customer telecome brand name : "<<cust_telecome_brand_name<<endl<<endl;
				cout<<"Customer mobile number : "<<cust_mobile_number<<endl<<endl;
				cout<<"Customer City : "<<cust_city<<endl<<endl;
				cout<<"Customer simcard validity : "<<cust_simcard_validity<<endl<<endl;
				
			}
};

int main(){
	
	Customer obj1,obj2,obj3,obj4,obj5;
	
	obj1.setter();
	obj1.getter();
	
	obj2.setter();
	obj2.getter();
	
	obj3.setter();
	obj3.getter();
	
	obj4.setter();
	obj4.getter();
	
	obj5.setter();
	obj5.getter();
		
	return 0;
}

#include<iostream>

using namespace std;

class data{
	private:
		int hotel_id,
			hotel_establish_year,
			hotel_staff_quantity,
			hotel_room_quantity;
		
		char 
			 hotel_type[50],
			 hotel_rating[100],
			 hotel_name[50];
		
		static char hotel_location[50];	 

	
	public:
		void setter(){
			cout<<"Enter Your Hotel Id :";
			cin>>hotel_id;
					
			cout<<"Enter Your Hotel Name :";
     		cin>>hotel_name;
			
			cout<<"Enter Your Hotel Type (like hotel or motel) :";
			cin>>hotel_type;
			
			cout<<"Enter Your Hotel Rating (like 1 Star, 2 Start, ..., 7 Star) :";
			cin>>hotel_rating;
	
//			cout<<"Enter Your Hotel hotel_location (city name) :";
//			cin>>hotel_location;
					
			cout<<"Enter Your Hotel Establish Year :";
			cin>>hotel_establish_year;
			
			cout<<"Enter Your Hotel Staff Quantity :";
			cin>>hotel_staff_quantity;
			
			cout<<"Enter Your Hotel Room Quantity :";
			cin>>hotel_room_quantity;
		}
		void getter(){
			cout<<"Hotel_id : " <<hotel_id <<endl;
			cout<<"Hotel_name : " <<hotel_name << endl;
			cout<<"Hotel_type : " <<hotel_type << endl;
			cout<<"Hotel_rating : " <<hotel_rating << endl;
			cout<<"Hotel_location : " <<hotel_location << endl;
			cout<<"Hotel_establish_year : " <<hotel_establish_year << endl;
			cout<<"Hotel_staff_quantity : " <<hotel_staff_quantity << endl;
			cout<<"Hotel_room_quantity : " <<hotel_room_quantity << endl;

		}
};
char data :: hotel_location[]="surat";

int main(){

	data obj;
	
	obj.setter();	

	obj.getter();	
	
	return 0;
}
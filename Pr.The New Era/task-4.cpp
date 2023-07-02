//4. WAP to get and display 4 Cars information using class and object by including below mentioned attributes:

#include<iostream>
#include<string.h>

using namespace std;

class car{
	public:
	int car_id;
	char company_name[20];
	char car_color[20];
	char car_model[20];
	int release_year;	
};

int main(){
	
	car obj1,obj2,obj3,obj4;
	
	obj1.car_id=1;
	strcpy(obj1.company_name,"Hyundai");
	strcpy(obj1.car_color,"Black");
	strcpy(obj1.car_model,"Hyundai venue");
    obj1.release_year=2023;
	cout<<"car_id no: ";
	cout<<obj1.car_id<<endl;
	cout<<"company_name: ";
	cout<<obj1.company_name<<endl;
	cout<<"car_color: ";
	cout<<obj1.car_color<<endl;
	cout<<"Car_model: ";
	cout<<obj1.car_model<<endl;
	cout<<"release_year: ";
	cout<<obj1.release_year<<endl<<endl;
	
	obj2.car_id=2;
	strcpy(obj2.company_name,"Honda");
	strcpy(obj2.car_color,"white");
	strcpy(obj2.car_model,"Honda Amaze");
    obj2.release_year=2023;
	cout<<"car_id no: ";
	cout<<obj2.car_id<<endl;
	cout<<"company_name: ";
	cout<<obj2.company_name<<endl;
	cout<<"car_color: ";
	cout<<obj2.car_color<<endl;
	cout<<"Car_model: ";
	cout<<obj2.car_model<<endl;
	cout<<"release_year: ";
	cout<<obj2.release_year<<endl<<endl;
	
	obj3.car_id=3;
	strcpy(obj3.company_name,"Tata motors");
	strcpy(obj3.car_color,"white");
	strcpy(obj3.car_model,"Tata Nexon");
    obj3.release_year=2019;
	cout<<"car_id no: ";
	cout<<obj3.car_id<<endl;
	cout<<"company_name: ";
	cout<<obj3.company_name<<endl;
	cout<<"car_color: ";
	cout<<obj3.car_color<<endl;
	cout<<"Car_model: ";
	cout<<obj3.car_model<<endl;
	cout<<"release_year: ";
	cout<<obj3.release_year<<endl<<endl;
	
	
	obj4.car_id=4;
	strcpy(obj4.company_name,"Mahindra");
	strcpy(obj4.car_color,"black");
	strcpy(obj4.car_model,"Honda Amaze");
    obj4.release_year=2019;
	cout<<"car_id no: ";
	cout<<obj4.car_id<<endl;
	cout<<"company_name: ";
	cout<<obj4.company_name<<endl;
	cout<<"car_color: ";
	cout<<obj4.car_color<<endl;
	cout<<"Car_model: ";
	cout<<obj4.car_model<<endl;
	cout<<"release_year: ";
	cout<<obj4.release_year<<endl;
	
	
	
	
	return 0;
}

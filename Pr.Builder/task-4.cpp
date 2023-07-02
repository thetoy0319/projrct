//4. WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, 
//stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. Make suitable setter 
//and getter with use of static data members.

#include<iostream>
#include<string.h>

using namespace std;
class highschool{
	private:
		int stu_id;
	    char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		float stu_contact;
		char stu_edu_name[200];
		char stu_address[200];
		
	public:
	void setter(){
		cout<<"Enter stu id: ";
	   	cin>>stu_id;
    	cout<<"Enter stu name: ";
    	cin>>stu_name;
    	cout<<"Enter stu roll no: ";
    	cin>>stu_roll_no;
    	cout<<"Enter stu standard :";
    	cin>>stu_standard;
    	cout<<"Enter age:";
    	cin>>stu_age;
    	cout<<"Enter stu contact:";
    	cin>>stu_contact;
    	cout<<"Enter stu edu name:";
    	cin>>stu_edu_name;
    	cout<<"Enter stu address:";
    	cin>>stu_address;
	}	
	void getter(){
		cout<<"Enter stu id: "<<stu_id<<endl;
		cout<<"Enter stu name:"<<stu_name<<endl;
		cout<<"Enter stu roll no: "<<stu_roll_no<<endl;
		cout<<"Enter stu standard: "<<stu_standard<<endl;
		cout<<"Enter age: "<<stu_age<<endl;
     	cout<<"Enter stu contact:"<<stu_contact<<endl;	
		cout<<"Enter stu education name: "<<stu_edu_name<<endl;
		cout<<"Enter stu address: "<<stu_address<<endl;
	}	
};
class college{
	private:
		int stu_id;
	    char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		float stu_contact;
		char stu_edu_name[200];
		char stu_address[200];
		
	public:
	void setter(){
		cout<<"Enter stu id: ";
	   	cin>>stu_id;
    	cout<<"Enter stu name: ";
    	cin>>stu_name;
    	cout<<"Enter stu roll no: ";
    	cin>>stu_roll_no;
    	cout<<"Enter stu standard :";
    	cin>>stu_standard;
    	cout<<"Enter age:";
    	cin>>stu_age;
    	cout<<"Enter stu contact:";
    	cin>>stu_contact;
    	cout<<"Enter stu edu name:";
    	cin>>stu_edu_name;
    	cout<<"Enter stu address:";
    	cin>>stu_address;
	}	
	void getter(){
		cout<<"Enter stu id: "<<stu_id<<endl;
		cout<<"Enter stu name:"<<stu_name<<endl;
		cout<<"Enter stu roll no: "<<stu_roll_no<<endl;
		cout<<"Enter stu standard: "<<stu_standard<<endl;
		cout<<"Enter age: "<<stu_age<<endl;
     	cout<<"Enter stu contact:"<<stu_contact<<endl;	
		cout<<"Enter stu education name: "<<stu_edu_name<<endl;
		cout<<"Enter stu address: "<<stu_address<<endl;
	}	
	
};

int main(){
class highschool obj1,obj2;
class college obj1,obj2;
	
	obj1.setter();
	obj1.setter();
	
	obj1.getter();
	obj2.getter();
	
	obj1.setter();
	obj1.setter();
	
	obj1.getter();
	obj2.getter();
	
	return 0;
}

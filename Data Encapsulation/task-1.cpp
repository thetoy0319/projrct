//1. WAP to get and display 5 Students information using encapsulation.

#include<iostream>

using namespace std;

class Student{
	
	private:
		int stu_id;
        char stu_name[50];
        int stu_age;
        char stu_course[50];
      	char stu_city[50];
 		char stu_college[50];
 		
 	public: 
	 void setter(){
 		
 		cout<<"Enter student ID : ";
 		cin>>stu_id;
 		
 		cout<<"Enter student Name : ";
 		cin>>stu_name;
 		
 		cout<<"Enter student Age : ";
 		cin>>stu_age;
 		
 		cout<<"Enter student Course : ";
 		cin>>stu_course;
 		
 		cout<<"Enter student City : ";
 		cin>>stu_city;
 		
 		cout<<"Enter student Collage : ";
 		cin>>stu_college;
	 }	
	 
	 void getter(){
	 	
	 	cout<<"\nStudent ID : "<<stu_id<<endl<<endl;
	 	cout<<"Student Name : "<<stu_name<<endl<<endl;
	 	cout<<"Student Age : "<<stu_age<<endl<<endl;
	 	cout<<"Student Course : "<<stu_course<<endl<<endl;
	 	cout<<"Student City : "<<stu_city<<endl<<endl;
	 	cout<<"Student College : "<<stu_college<<endl<<endl<<endl;
	 	
	 }
};

int main(){
	
	Student obj1,obj2,obj3,obj4,obj5;
	
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

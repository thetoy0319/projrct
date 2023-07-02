//3. WAP to get and display 5 Employees' information using class and object by including below mentioned attributes:- 
//- emp_id
//- emp_name
//- emp_role
//- emp_age
//- emp_salary
//- emp_experience
//- emp_city
//- emp_company_name

#include<iostream>
#include<string.h>
using namespace std;

class employee{
	public:
		int emp_id;
		char emp_name[30];
		int role;
	    int age;
	    int salary;
	    int experience;
	    char city[30];
	    char company_name[30];
	    
};

int main(){
	
	employee obj1,obj2,obj3;
	
	obj1.emp_id=101;
	strcpy(obj1.emp_name,"kritika");
	obj1.role=5;
	obj1.age=23;
	obj1.salary=20000;
	obj1.experience=3;
	strcpy(obj1.city,"surat");
	strcpy(obj1.company_name,"Devotee infotech");
	cout<<"Id no: "<<obj1.emp_id<<endl;
	cout<<"Employee name: "<<obj1.emp_name<<endl;
	cout<<"Roll no: "<<obj1.role<<endl;
	cout<<"Age: "<<obj1.age<<endl;
	cout<<"Salary: "<<obj1.salary<<endl;
	cout<<"Experience: "<<obj1.experience<<endl;
	cout<<"City: "<<obj1.city<<endl;
	cout<<"Company Name: "<<obj1.company_name<<endl<<endl;
	
	obj2.emp_id=58;
	strcpy(obj1.emp_name,"kartik");
	obj2.role=15;
	obj2.age=30;
	obj2.salary=28000;
	obj2.experience=6;
	strcpy(obj1.city,"surat");
	strcpy(obj1.company_name,"Dreamvision");
	cout<<"Id no: "<<obj1.emp_id<<endl;
	cout<<"Employee name: "<<obj1.emp_name<<endl;
	cout<<"Roll no: "<<obj1.role<<endl;
	cout<<"Age: "<<obj1.age<<endl;
	cout<<"Salary: "<<obj1.salary<<endl;
	cout<<"Experience: "<<obj1.experience<<endl;
	cout<<"City: "<<obj1.city<<endl;
	cout<<"Company Name: "<<obj1.company_name<<endl<<endl;
	
	obj3.emp_id=3;
	strcpy(obj1.emp_name,"Mansi");
	obj3.role=1;
	obj3.age=36;
	obj3.salary=80000;
	obj3.experience=10;
	strcpy(obj1.city,"surat");
	strcpy(obj1.company_name,"Rp infotech");
	cout<<"Id no: "<<obj1.emp_id<<endl;
	cout<<"Employee name: "<<obj1.emp_name<<endl;
	cout<<"Roll no: "<<obj1.role<<endl;
	cout<<"Age: "<<obj1.age<<endl;
	cout<<"Salary: "<<obj1.salary<<endl;
	cout<<"Experience: "<<obj1.experience<<endl;
	cout<<"City: "<<obj1.city<<endl;
	cout<<"Company Name: "<<obj1.company_name<<endl<<endl;
	
	
	
	
	
	return 0;
}

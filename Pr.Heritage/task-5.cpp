//5. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)


#include<iostream>

using namespace std;

class A{
   private:
   	int id;
   	char name[300];
   	char role[700];
   public:	
     void setter1(){
     	cout<<"id :"<<endl;
     	cin>>id;
     	cout<<"name :"<<endl;
     	cin>>name;
     	cout<<"role :"<<endl;
     	cin>>role;
	 }
};
class B:public A{
   private:
   	int salary;
   	int experience;
  
   public:	
     void setter2(){
     	cout<<"salary:"<<endl;
     	cin>>salary;
     	cout<<"experience :"<<endl;
     	cin>>experience;
	 }
};
class C :public B{
   private:
    char name[600];
    char role[900];
    int salary;
  	char comp_name[300];
  	char address[500];
  	
   public:	
    void getter3(){
    	cout<<"name"<<name<<endl;
    	cout<<"role"<<role<<endl;
    	cout<<"salary"<<salary<<endl;
	}
	void setter3(){
		cout<<"comp_name:"<<endl;
		cin>>comp_name;
		cout<<"address: "<<endl;
		cin>>address;
	}
};
class D:public C{
    private:
     char email[670];
	 double contact;
	 
	public:
	 void setter4(){
	 	cout<<"email: "<<endl;
	 	cin>>email;
	 	cout<<"contact: "<<endl;
	 	cin>>contact;
	 }	
};


int main(){
	D obj;
	
	obj.setter1();
	obj.setter2();
	obj.setter3();
	obj.getter3();
	obj.setter4();
	
	return 0;
}

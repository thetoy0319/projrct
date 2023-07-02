//2. WAP to create a class which Read and print Student details using Two Classes. 
//(Make two classes, create one class's object in another class.)

#include<iostream>
#include<string.h>
using namespace std;

class student{
	private:
		int id;
		char name[50];
	public:
	
	void setter(int id,char name[]){
		this->id=id;
	    strcpy(this->name,name);
	}	
	void getter(){
		cout<<"id: " <<id<<endl;
		cout<<"name: "<<name<<endl;
	}
};
int main(){
	student obj1,obj2;
	
	obj1.setter(420,"priyal");
	obj2.setter(404,"pavan");
	
	obj1.getter();
	obj2.getter();
	
	return 0;
}

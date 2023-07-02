//1. WAP to create a Message class with a constructor that takes a single string with a default value. 

#include<iostream>
#include<string.h>

using namespace std;

class message{
	private:
		char Name[100];  
	public:
		message(char a[]){
			strcpy(Name,a);
		}
		void print(){
			cout<<"Your name: ";
		}
		void print(char lastname[]){
			cout<<Name<<" "<<lastname<<endl;
		}
}; 

int main(){
    message obj("Riya") ;
	obj.print();
	obj.print("Parmar");	
	return 0;
}

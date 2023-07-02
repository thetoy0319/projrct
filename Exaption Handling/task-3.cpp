//- a password cannot be validate if it doesn’t contains an uppercase letter

#include<iostream>

using namespace std;

int main(){
	
	char password;
	
	cout<<"Enter Password : "<<endl;
	cin>>password;
	
	try{
		if(password>='A' && password<='Z'){
			throw password;
		}
		else{
			cout<<"This password cannot be validate"<<endl;
		}
	}
	
	catch(...){
		cout<<"This password is validate"<<endl;
	}
	
	
	return 0;
}

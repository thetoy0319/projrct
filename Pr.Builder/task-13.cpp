//13. WAP to make Bank Management System.

#include<iostream>

using namespace std;

int main(){
	char value;
	char selection;
	int a;
	
		
	cout<<"       -: BANK MANAGMENT SYSTEM :-"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"       -: Designed N Programed By :-"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"             KHUSHI G BElADIYA"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"               -: Trainer :- "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"                ASHISH SOLANKI"<<endl;
	cout<<""<<endl;
    cout<<"          Press N key to continue..."<<endl;
    cin>>value;
    
    if((value == 'n') || (value == 'N')){
    	cout<<"----------------------------------------------------------------------------"<<endl;	
    }
	else{
		cout<<"Invalid output"<<endl;
	}
	
    cout<<"-: Press A to Log in as Administrator or S to log in as STAFF :-"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
	
	if((selection == 'A')  || (selection == 'S')){
      
	}
	else{
		cout<<""<<endl;
	}
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"                     -: Welcome as STAFF :-"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Enter The Name Of Staff               :khushi"<<endl;
	cout<<"Enter The Account Number Of Staff     :2657"<<endl;
	cout<<"Enter The Phone Number Of Staff       :9099678335"<<endl;
	cout<<"Enter The E-mail Of Staff             :kbeladiya010@gmail.com"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;	
	cout<<""<<endl;
	cout<<"-----------------------------------------------------------------------------------"<<endl;	
	cout<<"Name                                   :khushi"<<endl;
	cout<<"Account No                             :2657"<<endl;
	cout<<"Phone No                               :509743743"<<endl;
	cout<<"E-mail                                 :kbeladiya010@gmail.com"<<endl;
	cout<<"------------------------------------------------------------------------------------"<<endl;		
  	cout<<""<<endl;	
	cout<<""<<endl;

switch(a){
	case 1:
	cout<<"Press [1] to Deposite the money:"<<endl;
	cout<<"Press [2] to Transfer the money:"<<endl;
	cout<<"Press [3] to Withdraw the money:"<<endl;
	cout<<"------------------------------------------------------------------------------------"<<endl;		
	
	switch(a){
	case 2:
	cout<<"       Withdraw the money : 200000"<<endl;
	cout<<"------------------------------------------------------------------------------------"<<endl;	
	cout<<""<<endl;	
	cout<<""<<endl;
	cout<<"Your Actual Amount Is :200000"<<endl;	
	cout<<"Congrates Your Amout Has Withdraw Successfully."<<endl;	
   	cout<<"Your Account Balance Is :180000"<<endl;	
    break;		
	}
	break;	
		
}

		
	return 0;
}

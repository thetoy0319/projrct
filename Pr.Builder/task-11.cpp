//11. WAP to make Supermarket Billing System.

#include<iostream>

using namespace std;
class supermarket{
	private:
	   int id;
	   float password;
	   int item_number;
	   char item_name[100];
	   int quantity;
	   int tax;
	   int discount;
	
	public:
		void setter(){
		cout<<"Enter id: ";
	   	cin>>id;
	   	cout<<"Enter password: ";
	   	cin>>password;
	   	cout<<"Enter item number: ";
	   	cin>>item_number;
	   	cout<<"Enter item name: ";
	   	cin>>item_name;
	   	cout<<"Enter quantity: ";
	   	cin>>quantity;
	   	cout<<"Enter tax: ";
	   	cin>>tax;
	   	cout<<"Enter discount: ";
	   	cin>>discount;
	   	
//	   	return id;
		}
		void getter(){
		cout<<"Enter id:"<<id<<endl;
	    cout<<"Enter password:"<<password<<endl;
	    cout<<"Enter item number:"<<item_number<<endl;
	    cout<<"Enter item name:"<<item_name<<endl;
	    cout<<"Enter quantity:"<<quantity<<endl;
	    cout<<"Enter tax:"<<tax<<endl;
	    cout<<"Enter discount:"<<discount<<endl<<endl<<endl;
		}
};
int main(){
	supermarket obj1[7];
    int i,j,a[10];
	
	for(i=0; i<=7; i++){
		a[i]=obj1[i].setter();
	}	
    for(int i=0; i<7; i++){
    	for(int j=i+1; j<2; j++){
    		if(a[i]>a[j]){
    			int temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
	for(int i=0; i<7; i++){
    	for(int j=i+1; j<2; j++){
    		if(obj1[j].id == a[i]){
    			obj1[j].getter();
			}
		}
	}
	
	
	return 0;
}

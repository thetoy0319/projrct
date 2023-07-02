//2.WAP which illustrates the use of public and private access modifiers.

#include<iostream>
using namespace std;

class student{
	public:
		int money;

};

int main(){
	
	student obj;
	obj.money = 10000;
	
	cout<<obj.money;
	
	return 0;
}

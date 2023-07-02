//2. WAP to implement method overriding by following below mentioned criteria:

#include<iostream>

using namespace std;

class t20{
	public:
		void getTotalover1(int a,int b){
		   cout<<a+b<<endl;
		}
};

class test{
	public:
		void getTotalover2(int a,int b){
		   cout<<a+b<<endl;
		}
		
};

class cricket:public t20,public test{
	public:
		void getTotalover3(int a,int b){
		   cout<<a+b<<endl;
		}
};

int main(){
	cricket obj;
	
	obj.getTotalover1(10,10);
	obj.getTotalover2(10,20);
	obj.getTotalover3(10,30);
	return 0;
}

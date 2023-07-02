//4. WAP for unary increment (++) and decrement (--) operator overloading.
#include <iostream>
using namespace std;
class data{
private:
    int a;

public:
    void set(int a){
    	this->a=a;
	}
	
	void get(){
		cout<<a<<endl;
	}
	
	data operator ++ (){
		data temp;
		temp.a=++a;
		return temp;
	}
	data operator --(){
		data temp;
		temp.a=--a;
		return temp;
	}
};

int main() {
   data obj1,obj2;
   
   obj1.set(20);
   obj2=++obj1;
      obj2.get();

   obj2=--obj1;
      obj2.get();

    return 0;
}


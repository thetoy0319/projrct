//5. WAP to add two objects using binary plus (+) operator overloading.
#include<iostream>
using namespace std;

class data{
	private:
		int n;
	public:
	void set(int n){
		this->n=n;	
    }
    void get(){
        cout<<n<<endl;	
	}
	data operator+(data a){
		data temp;
		temp.n=n +a.n;
		return temp;
	}
};
int main(){
	
	data obj1,obj2,obj3;
	obj1.set(20000);
	obj2.set(10000);
	
	obj3=obj1+obj2;
	obj3.get();
	
	return 0;
}

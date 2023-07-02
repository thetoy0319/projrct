//8. WAP to demonstrate example of destructors.

#include<iostream>
using namespace std;
class student{
	public:
		student(){
			cout<<"default"<<endl;
		}
		~student(){
			cout<<"destructor"<<endl;
		}
};
int main(){
	student obj;
	
	return 0;
}


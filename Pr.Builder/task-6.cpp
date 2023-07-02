//6. WAP to demonstrate example of default constructor or no argument constructor.
#include<iostream>

using namespace std;

class student{
	public:
		student(){
			cout<<"default"<<endl;
		}
};
int main(){
	student obj;
	
	return 0;
}

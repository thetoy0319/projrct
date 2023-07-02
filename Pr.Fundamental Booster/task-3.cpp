//3. WAP to check if a given character is vowel or consonant.

#include<iostream>
using namespace std;

int main(){
	
	char ch;
	
	cout<<"Enter Character : ";
	cin>>ch;
	
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
		cout<<"vowel "<<ch;
	}
	else{
		cout<<"consonant "<<ch;
	}

	
	return 0;

}

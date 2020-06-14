#include<iostream>
using namespace std;

class base1{
	public:
	void printer(){
		cout<<"printer of base 1"<<endl;
	}
};

class base2:public base1{
	public:
	void printer(){				//function overriding
		cout<<"display of base2"<<endl;
	}
};
//class child inherites both base1 nad base2 classes
//class child:public base2{};		//multiple inheritance

int main(){
//	child ch;
	base2 b2;
	b2.printer();
//	ch.display();
}

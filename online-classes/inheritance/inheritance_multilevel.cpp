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
	void printer(){				//display
		cout<<"display of base2"<<endl;
	}
};
//class child inherites both base1 nad base2 classes
class child:public base2{};		//multiple inheritance

int main(){
	child ch;
	ch.printer();
//	ch.display();
}

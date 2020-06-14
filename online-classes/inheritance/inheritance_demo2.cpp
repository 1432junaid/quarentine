#include<iostream>
using namespace std;

class base1{
	public:
	void printer(){
		cout<<"printer of base 1"<<endl;
	}
};

class base2{
	public:
	void display(){
		cout<<"display of base2"<<endl;
	}
};

class child:public base1,public base2{};

int main(){
	child ch;
	ch.printer();
	ch.display();
}

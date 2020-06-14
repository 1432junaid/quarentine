#include<iostream>
using namespace std;

class base{
	public:
	void printer(){
		cout<<"public printer"<<endl;
	}
	protected:
	void display(){
		cout<<"protected display"<<endl;
	}
};
/*
class derived:public base{
	public:
	void abc(){
//	void abc(derived* d){
//		d->display();
		display();
	}
};
*/
class derived:protected base{
	public:
//	display();
	void abc(){
		printer();
		display();
	}
};

int main(){
	derived d;
//	d.printer();
//	d.display();
	d.abc();
	return 0;

}

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

class derived:private base{
	public:
//	display();
	void abc(){
		printer();
		display();
	}
};

class child:public derived(){
	public:
	void bbc(){
		printer();
		display();
	}
};

int main(){
//	derived d;
//	d.printer();
//	d.display();
//	d.abc();
	child c;
	c.bbc();
	return 0;

}

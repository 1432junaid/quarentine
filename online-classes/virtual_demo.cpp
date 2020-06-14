#include<iostream>
using namespace std;

class base{
	public:
	virtual void printer(){				//printer1
		cout<<"Printer of base "<<endl;
	}
	void display(){
		cout<<"Display of base"<<endl;
	}
};

class derived:public base{
	public:
	void printer(){
		cout<<"Printer of derived "<<endl;
	}
	virtual void display(){				//we can not do this static void (both)
		cout<<"display of derived"<<endl;
	}
};

int main(){
//	derived* d = new base();		//error
	base* d = new derived();		//experiment

	d->printer();
	d->display();
	return 0;
}

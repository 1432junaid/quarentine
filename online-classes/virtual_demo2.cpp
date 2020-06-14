

#include<iostream>
using namespace std;

class base{
	public:
	void printer(){				//printer1
		cout<<"Printer of base "<<endl;
	}
	base(){}
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
//	base* d = new derived();		//experiment
//	derived* d = new derived();		//it also called the base class constructor
//	d->base::printer();
//	d->base::display();
	base* d=new derived();
	d->base::printer();
	d->derived::display();			//Error
	delete 	d;				//this will also called base destructor
	return 0;
}

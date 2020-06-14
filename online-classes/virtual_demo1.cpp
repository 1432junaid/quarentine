

#include<iostream>
using namespace std;

class base{
	public:
	base(int x){					//error because derived class only calls the default constructor
//	base(){
		cout<<"base constructor"<<endl;
	}
	public:
	virtual void printer(){				//printer1
		cout<<"Printer of base "<<endl;
	}
	base(){}
	void display(){
		cout<<"Display of base"<<endl;
	}
	virtual ~base(){				//desturctor can be virtual but we can do constructor virtual
		cout<<"destructor base"<<endl;
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
	derived(int x){
		cout<<"derived constructor"<<endl;
	}
	~derived(){
		cout<<"destructor derived"<<endl;
	}
};

int main(){
//	derived* d = new base();		//error
//	base* d = new derived();		//experiment
	derived* d = new derived(10);		//it also called the base class constructor
	d->printer();
	d->display();
	delete 	d;				//this will also called base destructor
	return 0;
}

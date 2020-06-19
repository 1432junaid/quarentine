#include<iostream>
using namespace std;

class myclass{
//	punlic:
	virtual void printer(){
		cout<<"Parent of myclass"<<endl;
	}
	friend void caller();
};

class child:public myclass{
	void printer(){
		cout<<"printer of child"<<endl;
	}
	void display(){
		cout<<"Display of myclass "<<endl;
	}
};

void caller(){
//	child m;			//by the help of caller we can access the private members of mycalss
//	m.printer();
	myclass* m = new child();
	m->printer();
}

int main(){
//	caller();
//	myclass* p = new child();
//	p->printer();
	caller();
	return 0;
}

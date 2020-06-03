#include<iostream>

using namespace std;
class mclass{
	public :
	void caller(myclass *m){
		m->printer();
		m->abc();
	}
	void call(myclass *m){
		m->printer();
		m->abc();
	}
};

class myclass(){
	void printer(){
		cout<<"I am printer"<endl;
	}
	public:
	void abc(){
		cout<<"I an abc"<<endl;
	}
	friend void mclass::caller();
};

int main(){
	myclass *m = new myclass();
	mclass m1;
	m1.caller(m);
	m1.call(m);
	return 0;
}

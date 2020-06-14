#include<iostream>
using namespace std;

class base{
	public:
	void printer(){
		cout<<"I am public printer"<<endl;
	}
	protected:
	void display(){
		cout<<"I am protected printer"<<endl;
	}
	private:
	void show(){
		cout<<"I am private printer"<<endl;
	}
};
class derived:public base{
	public:
	void abc(derived* d){			//now it is accessible 
		d->display();
	}
};

int main(){
//	derived m1;
	derived* m1 = new derived();
//	m1.printer();
//	m1->display();
	m1->abc(m1);
//	m1.show();
	return 0;
}

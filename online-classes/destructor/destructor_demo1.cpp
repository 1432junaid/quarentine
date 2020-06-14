#include<iostream>
using namespace std;

class demo{
	public:
	int x;
	demo():x(10){}
	~demo(){
		cout<<"destructor called "<<endl;
	}
	void caller(){
		demo* d = new demo();
		cout<<d->x<<endl;
		delete d;
	}//2 destructor call
};

void call(){
	demo* d = new demo();
	d->x =20;
	cout<<d->x<<endl;
	delete d;
}//1 destructor call

int main(){
	call();
	demo* d1 = new demo();
	d1->caller();
	delete d1;
	return 0;
}//3 destructor call



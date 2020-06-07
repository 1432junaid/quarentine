#include<iostream>
using namespace std;

class demo{
	public:
	int x;
	demo():x(10){}				//direct initialiazaion
	~demo(){
		cout<<"destructor called "<<endl;
	}
	void caller(){
		demo d;
		cout<<d.x<<endl;
	}//2 destructor call
};

void call(){
	demo  d;
	d.x =20;
	cout<<d.x<<endl;
}//1 destructor call

int main(){
	call();
	demo d1;
	d1.caller();
	return 0;
}//3 destructor call



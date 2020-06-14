#include<iostream>
using namespace std;

class demo{
	public:
	int x;
	static demo* dp;
	demo():x(10){}
	~demo(){
		cout<<"destructor called "<<endl;
	}
	void caller(){
		demo d;
		cout<<d.x<<endl;
	}
};
static demo* dp = NULL;
void call(){
	dp = new demo();
	dp ->x = 20;
	cout<<dp -> x <<endl;
	delete dp;
}

int main(){
	call();
	demo* d1 = new demo();
	cout<<d1->x <<endl;
	d1->caller();
	return 0;
}



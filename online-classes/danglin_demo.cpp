#include<iostream>
using namespace std;

class myclass{
	int data;
	public:
	void setdata(int data){
		this->data = data;
	}
	int getdata(){
		return this->data;
	}
};

void fun1(myclass* m){
	cout<< m->getdata()<<endl;
	delete m;
}

void fun2(myclass* m1){
	cout<< m1->getdata()<<endl;
	delete m1;
}

int main(){
	myclass* m = new myclass();
	m->setdata(30);
	fun1(m);
	fun2(m);
	return 0;
}

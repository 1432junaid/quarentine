#include<iostream>
using  namespace std;

class myclass{
	int age;			//private
	int salary;			//prinvate
	public:
	myclass(int a, int b){		//cnstructor
		age = a;
		salary = b;
	}
	void set_age(int age ){		//thid id why we use the this opreator 
		this ->age = age;
	}
	int get_age(){
		return this->age;
	}
};

int main(){
	myclass m(20,300);
	myclass m2(21,4000);
	m.set_age(25);
	cout<<m.get_age()<<endl;
	return 0;
}

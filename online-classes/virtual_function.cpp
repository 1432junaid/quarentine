#include<iostream>

using namespace std;

class parent{						//this calss is abstract class and we can not create object of abstract calss
	public:
	parent(){
		cout<<"constructor of parent"<<endl;
	}
	private:
	virtual void printer() = 0;			//pure virtual function
	public:
	void display(){
		cout<<"Display of parent"<<endl;
	}
	void abc(parent& p){
		p.printer();
	}

};
//abstract means incomplete in the case of parent class there is printer function which is incomplete
class child:public parent{
	public:
	child(){
		cout<<"constructor of child"<<endl;
	}
	private:
	void printer(){
		cout<<"parent of child"<<endl;
	}
};

int main(){
//	parent p;					//object of abstract class can not be created
	child p;
//	p.display();
//	p.printer();
	p.abc(p);					//child class me parent type ka refference pass kr ske hai 
	return 0;
}

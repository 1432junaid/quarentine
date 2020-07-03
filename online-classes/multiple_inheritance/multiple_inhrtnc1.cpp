/*
	if a Derived class inherited from multiple base class
*/

#include<iostream>
using namespace std;

class parent{
	public:
	parent(){
		cout<<"constructor parent"<<endl;
	}

};

class base:public parent{
	public:
	~base(){
		cout<<"I am destructor of base"<<endl;
	}
	void printer(){
		cout<<"I am printer"<<endl;
	}
};

class base2:public parent{
	public:
	~base2(){
		cout<<"I am destructor of base2"<<endl;
	}
	void display(){
		cout<<"I am display"<<endl;
	}
};

class derived:public base,public base2{
	public:
	~derived(){			//incase of more than one constructor of like class base then this line is more meaning full
		cout<<"I am desstructor of derived"<<endl;
	}
	void abc(){
		cout<<"I am Derived"<<endl;
	}
};
int main(){
	derived d;
	d.abc();
}

#include<iostream>

using namespace std;

class api_base{
	protected:
	api_base(){}
	public:
/*	virtual void printer(){
		cout<<"printer of api_base"<<endl;
	}*/  //or
	virtual void printer() = 0;


	friend api_base& factory();
};

class api_derived:public api_base{
	protected:
	api_derived(){}
	public:
	virtual void printer(){
		cout<<"printer of api_derived"<<endl;
	}
	friend api_base& factory();
};

api_base& factory(){
	api_base* ab = new api_derived();
	return (*ab);
}


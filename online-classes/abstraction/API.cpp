#include<iostream>

using namespace std;

class api_base{
	api_base(){}
	public:
	virtual void printer(){
		cout<<"printer of api_base"<<endl;
	}
	static api_base& factory(){
		api_base* api = new api_base();
		return(*api);
	}
};

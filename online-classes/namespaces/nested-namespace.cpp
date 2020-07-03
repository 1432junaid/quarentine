#include<iostream>
using namespace std;


void printer_global(){
	cout<<"I am global printer"<<endl;
}
namespace outer{
	int x =10;
	void printer(){
		cout<<"printer from outer"<<endl;
	}
	namespace inner{
		int y =20;
		void display(){
			outer::printer();	// or just printer();
	//		::printer();		//error this is not a global namespace
			::printer_global();
			cout<<"display from inner"<<endl;
		}
	}
	void abc(){
	//	display();		//error must call with  which::scope
		inner::display();
	}
}

int main(){
	outer::printer();
//	outer::display();	//error
	outer::inner::display();
	return 0;
}

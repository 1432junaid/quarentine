#include<iostream>
//#include"API.h"
#include"agreement.h"
using namespace std;
/*  FOR THE API.H
int main(){
	api_base& ab = factory();
	ab.printer();
	return 0;
}
*/
class agr_child:public agr_base{
	public:
	void printer(){
		cout<<"hello, i on agr_child"<<endl;
	}
};
int main(){
//	agr_base* a = new agr_base();	//1	there is abstract class
	agr_base* a = new agr_child();
	myclass m;
	m.caller(*a);
//	a->caller(*a);
	return 0;
}

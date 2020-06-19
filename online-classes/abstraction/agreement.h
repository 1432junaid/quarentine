#include<iostream>
using namespace std;

class agr_base{
	public:
	virtual void printer() = 0;
/*	void caller(agr_base& agr){		//1
		agr.printer();
	}
*/
};

class myclass{
	public:
	void caller(agr_base& agr){
		agr.printer();
	}
};


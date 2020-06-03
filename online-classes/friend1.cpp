#include<iostream>

using namespace std;
class myclass;
class mclass{
	
};

class myclass(){
	
};

int main(){
	myclass *m = new myclass();
	mclass m1;
	m1.caller(m);
	m1.call(m);
	return 0;
}
//

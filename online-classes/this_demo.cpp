#include<iostream>
using namespace std;

class myclass{
	myclass(){};
	public:
	void printer(){
		cout<<"hello printer"<<endl;
	}
};

int main(){
	myclass m;
	m.printer();
	return 0;
}

#include<iostream>
using namespace std;

class myclass{
//	public:
	int age =20;			//difference by default private
	public:
	int sal = 3000;
	void display();
};

void myclass::display(){
	cout<<"display function"<<endl;
}

int main(){
	myclass m1;
	m1.display();
//	display();
	return 0;
}

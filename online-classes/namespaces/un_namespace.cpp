#include<iostream>
using namespace std;

int x =10;			//also found in global space
void printer(){
	cout<<"Independent printer"<<endl;
}
void display(){
	cout<<"Independent display"<<endl;
}

namespace{			//unnamed space
	void display(){
		cout<<"unnamed dispaly function"<<endl;
	}
}

int main(){
	::display();
//	display();		//error creating conflicts
	::printer();
	cout<<::x<<endl;
	return 0;
}

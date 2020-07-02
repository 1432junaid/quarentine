/*	What is namespace?
	feature of c++ to define scope.
	member with same name can co-exist is deferent namespace.
	it alse prevents name conflics.
	Members and a namespace could be:
		1. function
		2. varialble
		3. classes
	if a function who is not in any namespace then that function by defaulat will be global function

*/

#include<iostream>
using namespace std;
void printer(){
	cout<<"I am global printer"<<endl;
}
namespace firstname{
	int name = 104;
	void printer(){
		cout<<"I am printer 1"<<endl;
	}
}
namespace secondname{
	void printer(){
		cout<<"I am printer 2"<<endl;
	}
}
int main(){
	::printer();			//we can call global function by using :: opertor
	firstname::name = 102;
	cout<<firstname::name<<endl;
	firstname::printer();
	secondname::printer();
}

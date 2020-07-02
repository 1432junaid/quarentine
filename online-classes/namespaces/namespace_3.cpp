#include<iostream>
using namespace std;

namespace mynamespace{
	void printer();
	class myclass{
		public:
		void  printer();
	};
	class myclass1;			//class declaration
}

void mynamespace::printer(){
	std::cout<<"this printer of mynamespace"<<std::endl;
}
void mynamespace::myclass::printer(){
		cout<<"this is printer of myclass"<<endl;
}
class mynamespace::myclass1{
	public:
	void fun1(){
		cout<<"this is fum"<<endl;
	}
};
int main(){
	using namespace mynamespace;
//	myclass m1;			//works
//	myclass *m2 = new myclass();	//it will not work when we remove the line using namespace myclass
//	mynamespace::myclass *m2 = new mynamespace::myclass();
//	m2->printer();
	myclass1 m1;
	m1.fun1();
//	m1.printer();
//	printer();
}

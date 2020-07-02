#include<iostream>
//using namespace std;

namespace mynamespace{
	void printer();
	class myclass{
		public:
		void  printer(){
			std::cout<<"I am printer of myclass"<<std::endl;
		}
	};
}
void mynamespace::printer(){
	std::cout<<"this printer of mynamespace"<<std::endl;
}

int main(){
//	using namespace mynamespace;
//	myclass m1;			//works
//	myclass *m2 = new myclass();	//it will not work when we remove the line using namespace myclass
	mynamespace::myclass *m2 = new mynamespace::myclass();
	m2->printer();
//	m1.printer();
//	printer();
}

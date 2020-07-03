#include<iostream>
using namespace std;		//using directive in which we can use all the member resides in std namespace

namespace mynamespace{
	class myclass{
		public:
		void printer(){
			cout<<"Printer funtion"<<endl;
		}
	};
	class yourclass{
		public:
		void display(){
			cout<<"Display function"<<endl;
		}
	};
}
namespace m_namespace{
/*
	using namespace::myclass;		//using declaration
	using namespace::yourclass;		//using declaration
*/
//	using namespace mynamespace:		//using directive
	class mclass{
		public:
		void caller(){
			mynamespace::myclass m;
			m.printer();
			mynamespace::yourclass y;
			y.display();
		}
	};
}
int main(){
	m_namespace::mclass ms;
	ms.caller();
	return 0;
}

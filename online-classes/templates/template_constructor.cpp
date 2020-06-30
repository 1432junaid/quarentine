#include<iostream>
#include<string>
using namespace std;

class myclass{
	public:
/*	myclass(){			//this will no to allow
		template <typename T>class demo{
			void printer(T t){
				cout<<t<<endl;
			}
		};
	}
*/
	template<typename T> class demo{
		public:
		void printer(T t){
			cout<<t<<endl;
		}
	};
	void display(){
		demo<int> d;
		cout<<"Dispalt function"<<endl;
	}
};

int main(){
	myclass m;
	m.display();
	myclass::demo<int> d;
	d.printer(20);
	return  0;

}
/*
[note:] 1. template can not is constructor
	2. template can be a member of class
	3. template can be call whth the scope resolution we can see comment #call_by_class_name
*/

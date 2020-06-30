#include<iostream>
#include<string>
using namespace std;

template<typename M> class myclass{
	public:
	friend template<typename T>class demo{};
/*	template<typename T> class demo{
		public:
		void printer(T t,M m){
			cout<<m<<endl;
			cout<<t<<endl;
		}
	};

*/	void display(M m){
//		demo<int> d;
		cout<<m<<endl;
		cout<<"Dispalt function"<<endl;
	}
};
template<typename T> myclass template<typename> demo{
	public:
	void printer(T t,M m){
		cout<<m<<endl;
		cout<<t<<endl;
	}
}

int main(){
	myclass<string> m;
	string s = "lucknow";
	m.display(s);
	myclass<string>::demo<int> d;
	d.printer(1,s);
	return  0;

}

#include<iostream>
#include<string>
using namespace std;

template<typename M> class myclass{
	public:
	template<typename T>class demo{
		public:
		void printer(T t, M n);		//how can we defin this function outside these classs
	};
	void display(M m){
//		demo<int> d;
		cout<<m<<endl;
		cout<<"Dispalt function"<<endl;
	}
};
template<typename M> template<typename T> void myclass<M>::demo<T>::printer(T t,M m){
	cout<<m<<endl;
	cout<<t<<endl;
}

int main(){
	myclass<string> m;
	string s = "lucknow";
	m.display(s);
	myclass<string>::demo<int> d;
	d.printer(20,s);
	return  0;

}

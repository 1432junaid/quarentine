#include<iostream>
#include<string>
using namespace std;

void  printer();
template <typename T>
class myclass{
	T t;
	void display(){
		cout<<"Display function"<<endl;
		cout<<t<<endl;
	}
	friend class abc;
	public:
	myclass(T t){
		this->t = t;
	}
};
class abc{
	public:
	void printer(){
		myclass<int > m(10);
		m.display();
		string s = "Lucknow";
		myclass<string> m2(s);
		m2.display();
	}
};
int main(){
	abc a;
	a.printer();
	return 0;
}

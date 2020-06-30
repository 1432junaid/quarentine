#include<iostream>
#include<string>
using namespace std;

void  printer();
template <typename T>
class myclass{
	T t;
	myclass(T t){
		this->t = t;
	}
	void display(){
		cout<<"Display function"<<endl;
		cout<<t<<endl;
	}
	friend void printer();
};
void printer(){
	myclass<int > m(10);
	m.display();
	string s = "Lucknow";
	myclass<string> m2(s);
	m2.display();
}
int main(){
	printer();
	return 0;
}

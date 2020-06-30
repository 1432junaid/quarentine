#include<iostream>
#include<string>
using namespace std;

template <typename T> class myclass{
	public:
	void display(){
		cout<<"hello, I am display"<<endl;
	}
	void printer();
};

template<typename T> void myclass<T>::printer(){
	cout<<"I am printer"<<endl;
}
int main(){
	myclass<int> m1;
	m1.display();
	m1.printer();
	return  0;
}

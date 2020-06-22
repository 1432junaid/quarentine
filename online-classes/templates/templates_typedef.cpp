#include<iostream>
#include<string>
using namespace std;
typedef int T;
template<typename T>
class myclass{
	public:
	void printer(T t){
		cout<<t<<endl;
	}
};
void display(){
	T x = 20;
	cout<<x<<endl;
}
int main(){
	myclass<string> m2;
	T x =10;
	display();
	string s = "Lucknow";
	return  0;
}

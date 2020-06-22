#include<iostream>
#include<string>
using namespace std;

template<typename T>
class myclass{
	public:
	void printer(T t){
		cout<<t<<endl;
	}
};
/*
class myclass<string>{			//jb string ka object call krre hai to is type ka pura class bnta hai then wo uska instance bn date hai
	public:
	void pirnter(string T){
		cout<<t<<endl;
	}
};
class myclass<int>{
	public:
	void printer(int t){
		cout<<t<<endl;
	}
}
*/
//[note:]suppose myclass<int> ka object banaya or hmne usme char pass kia to ye use type conversion ke leta ni ki ek new object
//	banayega

int main(){
//	myclass<string>m1;
	myclass<int>m2;
//	string s = "Lucknwe";
//	m1.printer(s);
//	m2.printer('a');

	return 0;
}

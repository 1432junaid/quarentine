#include<iostream>

using namespace std;
struct class1{
	int age;
	class1(){
		age = 20;
	}
};

class class2{
	public:
	char gender;
	class2():gender('F'){
	}

};
/*

3 access modifiers:
	public
	private
	protected


*/

int main(){
	class1 c1;
	class2 c2;
	cout<<c1.age<<"  " <<c2.gender;
	return 0;
}

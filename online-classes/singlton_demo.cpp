#include<iostream>
using namespace std;

class myclass{
	public:
	int age;
	private:
	myclass():age(0){};
	public:
	static myclass * obj_creator(){
		static myclass * m = NULL;
		if(m == NULL){
			m  = new myclass();
		}
		return m;
	}
};

int main(){
	myclass * m1 = myclass ::obj_creator();
	m1 -> age =20;
	myclass * m2 = myclass ::obj_creator();
	cout<< m1->age<<endl;
	cout<< m2->age<<endl;
	return 0;
}

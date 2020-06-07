#include<iostream>
using namespace std;

class myclass{
	public:
	int age;
	int salary;
	myclass():age(10),salary(20){}
	myclass(const myclass& my):age(my.age),salary(my.salary){}
	myclass(int a,int s){
		age =a;
		salary = s;
	}
	~myclass(){
		cout<<"destructor called"<<endl;
	}
};

int main(){
	myclass m;
	cout<<m.age<<" "<<m.salary<<endl;
	m.age = 20;
	m.salary = 2000;
//	myclass m1 = myclass(25,3000);
	myclass* m1 = new  myclass(25,4000);				//object is in heap so destructor will not call
	cout<<m1->age<< "  "<<m1->salary<<endl;
	delete m1;							//it called desuctor of heap object
	return 0;
}


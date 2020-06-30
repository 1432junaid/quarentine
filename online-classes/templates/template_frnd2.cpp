#include<iostream>
#include<string>
using namespace std;

template<typename T>class abc;
void  printer();
template <typename T>
class myclass{
	T t;
	void display(){
		cout<<"Display function"<<endl;
		cout<<t<<endl;
	}
//	template <typename M> friend class abc;		//all the instance can call the all the private or protected members .[many to many relation]
	friend class abc<int>;				//this will allow only this particular type class
	public:
	myclass(T t){
		this->t = t;
	}
};
template <typename M>
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
	abc<int >a;
	a.printer();
	abc<string> a1;
//	a1.printer();
	return 0;
}

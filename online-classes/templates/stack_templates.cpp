
#include<iostream>
#include<string>
using namespace std;

template <typename t>
//int top = -1;
class stack{
	int top;
	t data[10];
	public:
	stack():top(-1){}
	void push(const t &x){
		if(top >10)cout<<"stack overflow"<<endl;
		data[++top] = x;
	}
	t pop(){
		if(top == -1)cout<<"Stack underflow"<<endl;
		return data[top--];
	}
};

int main(){
	stack<string> m1;
	m1.push("lucknow");
	m1.push("jd");
	cout<<m1.pop()<<endl;
	cout<<m1.pop()<<endl;
	return 0;

}

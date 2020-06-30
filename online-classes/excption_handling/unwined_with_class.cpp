#include<iostream>
using namespace std;

//stack unbinding
class bean{
	public:
	int correct;
	int incorrect;
	bean(){
		cout<<"constructor called:"<<endl;
	}
	~bean(){
		cout<<"destructor called :"<<endl;
	}
};
class calc{
	public:
	int calculator(){
		bean b;
		int  x,y;
		cout<<"Enter two values:"<<endl;
		cin>>x>>y;
		if(x<0){
		//	throw x;			//when this line execute this will check for the catch bolck if not 1
			b.incorrect = x;
			b.correct = 0;
			throw b;
		}else if(y<0){
			b.correct = x;
			b.incorrect = y;
			throw b;
		}
		return x*y;
	}
	void printer(){
		int result;
		try{
			result = calculator();
			cout<<"Result is:"<<result <<endl;
		}catch(bean& b){			//this create a copy of class bean
			if(b.correct == 0){
				cout<<"value of x is less then 0"<<endl;
			}else if(b.correct != 0){
				cout<<"value of y is less then 0"<<endl;
			}
		}
		cout<<"End of program :::"<<endl;
	}
};

int main(){
	calc c;
	c.printer();
	return 0;
}
/*
[note : 1
	find any catch block then stack poped and check the catch block in the calling function this is known as stack 
	unbinding]
*/

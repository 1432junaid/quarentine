#include<iostream>
#include<string>
using namespace std;

class myclass{
	public:
	int compare(int x,int y){
		if(x>y)return 1;
		if(y>x)return -1;
		return 0;
	}
	int compare(string str1,string str2){
		if(str1>str2)return 1;
		if(str2>str1)return -1;
		return 0; 
	}
};
//there is a concept of overloading that why we can call two differe arguments using compare function
int main(){
	myclass m1;
	cout<<m1.compare(4,5)<<endl;
	cout<<m1.compare("jd","ram")<<endl;
	return 0;
}

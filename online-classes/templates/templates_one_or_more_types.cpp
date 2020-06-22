#include<iostream>
#include<string>
using namespace std;
template<typename T,typename S>
class myclass{
	public:
	void printer(T t,S s){
		cout<<t<<"\t";
		cout<<s<<endl;
	}
};
//myclass<string,int>{.....}		//this is instance of the m2
int main(){
	myclass<string,int> m2;
//	myclass m1			//error there no class of this type,the type is myclass<T,S> or myclass<string,int>
	string s = "Lucknow";
	m2.printer(s,30);
	return  0;
}

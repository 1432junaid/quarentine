#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int operation(int,int,char);	//proto for operations
int is_oprtr(char);
int is_oprds(char);		//return 1 for 
int sum_exp(string &exp){
	stack<char >stk1;
	string::iterator itr1 = exp.begin();
	string::iterator itr2 = exp.end();
	while(itr1 != itr2){
		if(itr1 == ' ')continue;
		if(is_optr(*itr1) != -1)
			x =
}

int operation(int x,int y,char optr){
	switch(optr){
		case '+': return x+y;
		case '-': return x-y;
		case '*': return x*y;
		case '/': return x/y;
	}
}
int is_optr(char ch){
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/')return 1;
	return -1;
}

int 
int main(){
	string exp = "2 1 + 3 *";
	cout<<sum_exp(exp)<<endl;
	return 0;
}

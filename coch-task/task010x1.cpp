#include<iostream>
#include<string>
using namespace std;

string count_and_say_seq(int term){
	if(term == 1)return "1";
	if(term == 2)return "11";
	string  fterm = "11";
	for(int i=3;i<=term;i++){
		fterm += 'd';
		int len = fterm.length();
		int count = 1;
		string temp = "";
		for(int j=1;j<len;j++){
			if(fterm[j] != fterm[j-1]){
				temp += count +'0';
				temp += fterm[j-1];
				count =1;
			}else count++;
		}
		fterm = temp;
	}
	return fterm;
}

int main(){
	int term =5;
	cout<<count_and_say_seq(term)<<endl;
	return 0;
}


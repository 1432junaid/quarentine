#include<iostream>
#include<string>
using namespace std;

void display(string);
int last_word_len(string);

int main(){
	string str;
	cout<<"enter a line"<<endl;
	getline(cin,str);
	display(str);
	cout<<last_word_len(str)<<endl;
	return 0;
}

void display(string str){
	string::iterator itr1 = str.begin();
	string::iterator itr2 = str.end();
	while(itr1 != itr2){
		cout<<*itr1;
		itr1++;
	}
	cout<<endl;
}

int last_word_len(string str){
	int count = 0;
	string::reverse_iterator itr = str.rbegin();
	string::reverse_iterator itr1 = str.rend();
	if(str.length() == 0)return 0;
	while(itr != itr1){
		if(*itr == ' ')break;
		count = count +1;
		itr++;
	}
	return count;
}

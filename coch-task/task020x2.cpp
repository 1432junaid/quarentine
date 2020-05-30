#include<iostream>
#include<string>
#include<map>

using namespace std;
void display(map<int,string>);
void cmp(string , string );
void fun(map<int,string> ,int);

int main(){
	map<int, string>m;
	m.insert(make_pair(2,"abc"));
	m[3] = "def";
	m[4] = "ghi";
	m[5] = "jkl";
	m[6] = "mno";
	m[7] = "pqrs";
	m[8] = "tuv";
	m[9] = "wxyz";
	int x;
	cout<<"Enter 2 digits between 1 - 9 :";
	cin>>x;
	fun(m,x);
	cout<<endl;
	return 0;
}

void fun(map<int, string> m, int n){
	int x, y;
	x = n/10;
	y = n%10;
	cmp(m[x],m[y]);
}

void cmp(string str1,string str2){
	for(int i = 0; i < str1.length(); i++){
		for(int j = 0; j < str2.length(); j++){
			cout<<str1[i]<<str2[j]<<endl;
		}
	}
}

void display(map<int,string>m){
	map<int,string>::iterator itr1 = m.begin();
	map<int,string>::iterator itr2 = m.end();
	while(itr1 != itr2){
		cout<< itr1 ->first<<"\t"<< itr1 -> second<<endl;
		itr1++;
	}
}



#include<iostream>
#include<string>
using namespace std;

string add(string str1, string str2){
	int i = str1.size()-1;
	int j = str2.size()-1;
	string result="";
	while(i>=0 && j<=0){
		if(str1[i] == '0' && str2[j] == '0')cout<<"run";//result += '0';
		if((str1[i] == '0' || str1[i] =='1') && (str2[j] == '0' ||str2[j] =='1'))cout<<"run2"<<endl;//result += '1';
		i--;
		j--;
	}
	return result;
}
int main(){
	string s1 = "00";
	string s2 = "00";
	string result = add(s1,s2);
	cout<<result<<endl;
	return 0;
}

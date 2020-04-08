#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int count_sub_seq(string &str1,int len1, string &str2, int len2){
	for(int i=0;i<len1;i++){
		for(int j=0;j<len2;j++){
			if(str2[j] == str1[i]){
				return count_sub_seq(str1,len)
		}
	}
	return count;
}

int main(){
	string str1="rabbbit";
	string str2="rabbit";
//	unsigned int len1 = str1.length();
//	unsigned int len2 = str2.length();
//	int count = 0;
	cout<<len1<<endl;
	cout<<len2<<endl
	cout<<count_sub_seq(str1,str1.lenght(),str2,str2.lenght());
	return 0;
}

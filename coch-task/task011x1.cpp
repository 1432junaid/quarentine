#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int count_sub_seq(string &str1, string &str2){
	int len1 = str1.length();
	int len2 = str2.length();
	int c[200];
//	for(int i=1; i<len1; i++)c[i][0] = 0;
//	for(int j=0; j<len2; j++)c[0][j] = 0;
	if(len1<len2)return 0;
	c[0] = 1;
	for(int i =1;i<=len1;i++)c[i] = 0;
	for(int i=1;i<len1;i++){
		for(int j=len2;j>=1;j--){
			if(str1[i-1] == str2[j-1])c[j] += c[j-1];
		}
	}
	return c[str2.size()];
}

int main(){
	string str1="rabbbit";
	string str2="rabbit";
//	unsigned int len1 = str1.length();
//	unsigned int len2 = str2.length();
//	int count = 0;
//	cout<<len1<<endl;
//	cout<<len2<<endl
	cout<<count_sub_seq(str1,str2);
	return 0;
}

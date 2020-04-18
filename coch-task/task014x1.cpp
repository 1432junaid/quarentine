#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int min(int x,int y, int z){
	return min(min(x,y),z);
}
int edit_dist(string &word1,string &word2){
	int len1 = word1.length();
	int len2 = word2.length();
	int c[len1 + 1][len2 + 1];
	for(int i =0; i<= len1;i++){
		for(int j = 0;j <= len2; j++){
			if(i == 0){
				c[i][j] = j;
			}else if(j == 0){
				c[i][j] = i;
			}else if(word1[i-1] == word2[j -1]){
				c[i][j] = c[i-1][j-1];
			}else{
				c[i][j] = 1 + min(c[i][j-1],c[i-1][j],c[i-1][j-1]);
			}
		}
	}
	return c[len1][len2];
}


int main(){
	string word1;
	string word2;
	cout<<"Enter word 1 :"<<endl;
	cin>>word1;
	cout<<"Enter word 2 :"<<endl;
	cin>>word2;
	cout<<edit_dist(word1,word2)<<endl;
	return 0;

}

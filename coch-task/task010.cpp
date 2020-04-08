#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int, char>m1;
	m1[1] = 'A';
	m1[2] = 'B';
	m1[3] = 'C';
	m1[4] = 'D';
	m1[5] = 'E';
	m1[6] = 'F';
	m1[7] = 'G';
	m1[8] = 'H';
	m1[9] = 'I';
	m1[10] = 'J';
	m1[11] = 'K';
	m1[12] = 'L';
	m1[13] = 'M';
	m1[14] = 'N';
	m1[15] = 'O';
	m1[16] = 'P';
	m1[17] = 'Q';
	m1[18] = 'R';
	m1[19] = 'S';
	m1[20] = 'T';
	m1[21] = 'U';
	m1[22] = 'V';
	m1[23] = 'W';
	m1[24] = 'X';
	m1[25] = 'Y';
	m1[26] = 'Z';
	map<int ,char>::iterator itr1 = m1.begin();
	map<int ,char>::iterator itr2 = m1.end()
	whlie(itr1 != itr2){
		cout<<m1.first <<":"<<m1.second<<endl;
		itr1++;
	}
	return 0;
}

#include<iostream>
using namespace std;

 check_transpose(int matrix[6][6]){
	for(int c_val = 0; c_val<6; c_val++){
		int row,col;
		for(row=0,col=0;row<6,col<6;row++,col++){
			(matrix[row][c_val] = matrix[c_val][col])
		}
	}
	return matrix;
}

int main(){
	int matrix[6][6] = {	{0,1,1,1,0,1},
				{1,0,0,1,1,0},
				{1,0,0,0,0,1},
				{1,1,0,0,1,1},
				{0,1,0,1,0,0},
				{1,0,1,1,0,0}	};
	cout<<check_transpose(matrix)<<endl;
	return 0;
}

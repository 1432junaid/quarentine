#include<iostream>
using namespace std;

int matrix[6][6] = {    {0,1,1,1,0,1},
                                {1,0,0,1,1,0},
                                {1,0,0,0,0,1},
                                {1,1,0,0,1,1},
                                {0,1,0,1,0,0},
                                {1,0,1,1,0,0}   };
int check_transpose(int matrix[6][6],int dim){
	for(int i = 0; i<dim;i++){
		for( int j = 0;j < dim;j++){
			
		}
	}
}

int main(){
	int dim = 6;
	int result = check_transpose(matrix,dim);
	if(result == 1){
		cout<<"graph is simple and undirected\n"<<endl;
	}else{
		cout<<"graph is not simple or undirected\n"<<endl;
	}
	return 0;
}

#include<iostream>
#include<vector>

using namespace std;
/*
class Graph{
	public:
	private:
	int rows;		//row
	int col;		//column
//[error:] row is not a data type
	vector<vector<int> > graph(row,vector<int>(col));		//2D matrix of (row x col)
	public:
	Graph(int row, int col){		//constructor
		cout<< " constuctor called" << endl;
		this->rows = row;
		this->col = col;
		cout << "enter the matrix" << endl;
	for(int i =0; i<graph.size(); i++){
		for(int j =0; j<graph[i].size(); j++){
			cout << graph[i][j] << "  ";
		}
		cout << endl;
				cin>> graph[i][j];
			}
		}
	}
	void printer();
};
*/

void multiply(vector<vector <int>>, vector<vector<int>>);		//* prototype declaration

void printer(vector<vector<int>> graph){				//use the scope of Graph class
	for(int i =0; i< graph.size(); i++){
		for(int j =0; j<graph[i].size(); j++){
			cout << graph[i][j] << "  ";
		}
		cout << endl;
	}
}

void transpose(vector<vector<int>> matrix){				//use the scope of the Graph class

	cout<<"***** transposing ****\n";
	vector<vector<int>>trns(matrix.size(), vector<int> (matrix[0].size(),0) );
	for(int i =0; i < matrix.size(); i++){
		for(int j = 0; j< matrix[i].size(); j++){
			trns[j][i] = matrix[i][j];
		}
	}cout<<endl;
	cout << "**** printing transpose of a matrix *****\n";
	printer(trns);

// outdegree is diagonal of  [m1 * transpose m1]

	cout<<"printing out_degree" << endl;
	multiply(matrix,trns);			//print diagonals

//  indegree is diagonal of  [transpose m1 * m1]

	cout<<"printing indegree" << endl;
	multiply(trns,matrix);			//print diagonals
}

void multiply(vector<vector<int> > m1,vector<vector<int>> m2){
	cout << "*****Multiply********\n";
	vector<vector<int>> mul(m1.size(), vector<int> (m1[0].size(),0) );	//create 2D vector name mul to store multiple of matrix

	for(int i =0; i< mul.size(); i++){
		for(int j = 0; j < mul.size(); j++){
			for(int k =0; k < mul[i].size(); k++){
				mul[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

//	printing diagonals

	for(int i=0; i<mul.size(); i++){
		cout<<"\t"<<mul[i][i];
	}
	cout<<"\n";

}

int main(){

	int row,col;
	cout << "Enter the number of rows  :";
	cin>>row;
	cout << "Enter the number of columns  :";
	cin >> col;
	cout << endl;
	vector< vector<int > >graph(row, vector<int>(col));
	for(int i =0 ; i< graph.size(); i++){
		for(int j =0; j< graph[i].size(); j++){
			cout<<"enter the element " <<i<<j<< "  :";
			cin>>graph[i][j];
		}
	}

//	Graph G(row,col);		//create instance of class[Graph] name G

	printer(graph);
	transpose(graph);
	return 0;
}

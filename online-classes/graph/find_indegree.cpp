#include<iostream>
#include<vector>

using namespace std;


class Graph{
	int row;
	int col;
	vector<vector<int> > graph;
	public:
	Graph(int row,int col){
		this->Graph = graph(row,vecotor<int >(col,0) );
		for(int i=0; i<row; i++){
			for(int j =0; j<col;j++){
				cin>>this->graph[i][j];
			}
		}
	}
//	vector< vector<int> > transpose(vector< vector<int> > graph);
//	vector< vector<int> > multiply (vector< vector<int> > graph);
//	vector< vector<int> > display_matrix(vector<vector<int> > graph)
//	vector< vector<int> > print_in_out_degree(vector< vector<int> > graph,int row,int col)
	void printer(vector<vector <int> >graph);
};

/*
vector< vector<int > > graph::transpose(vector< vector<int> >graph,int row,int col){
	vector<vector<int>>t1(col);
	for(int i=0;i<col;i++){
		t1[i].resize(row);
	}
	for(int i=0;i<row;i++){
		for(int j =0; j<col;j++){
			t1[j][i] = t1[i][j];
		}
	}

	return t1;
}

vector< vector<int > > graph::multiply(vector< vector<int> > graph1,vector<vector<int>>graph2,int a,int,b,int e,int f){
	vector<vector<int>>d(a);
	for(int i=0;i<f;i++){
		d[i].resize(a);
	}
	for(int i =0;i<a;i++){
		vector<int> myrow;
		my.reverse(a);
	for()
	}
}
vector<int> graph::print_in_out_degree(vector<vector<int >>graph,int row ,int col){
	for
}

*/
void graph::printer(vector<vector<int> >graph){
	for(int i =0;i<graph.size(); i++){
		for(int j =0; j < graph[i].size(); j++){
			cout << graph[i][i] << "  ";
		}
		cout << endl;
	}

}
int main(){
	int row,col;
	cout<<"Enter number of row   :";
	cin>>row;
	cout<<"Enter number of column   :";
	cin>>col;
	Graph G(row,col);
	G.printer(G);

}
















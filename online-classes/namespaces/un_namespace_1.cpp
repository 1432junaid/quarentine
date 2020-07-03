#include<iostream>
using namespace std;

/*The member of un-namespace exsist within a file ,
	or the scope of members of un-named namespace will be within the file
	that can not accessable by any other files

*/
namespace{
	int add(int x,int y){
		return x+y;
	}
}
void caller(){
	cout<<add(4,6)<<endl;
}

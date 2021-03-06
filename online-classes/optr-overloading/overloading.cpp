
/*
finction/constructor signature:
	signature is defined by:
	1. Number of arguments
	2. types of arguments
	3. order of arguments
*/
class myclass{
//	int a,b;
	public:
	int add(int x,int y){
		return x+y;
	}
	int add(int x,int y,int z){
		return x+y+z;
	}
	int add(int a,float b){
		return a+b;
	}
	int  add(float b,int a){		//
		return a+b;
	}
};
class myclass2{
	int a,b;
	public:
	myclass(int x):x(a){}
	myclass(int x,int y){
		a = x;
		b = y;
		return a+b;
	}
};

int main(){
	mycalss m;
	int k = m.add(2,6);
	int j = m.add(7,4,8);
	cout<<k<<"  "<<j<<endl;
	return 0;
}
/*
Polymorphism:
	1. Overloading(same name,different signature)
	2. overriding (same name,same signature)

1. Overloading :
	a) functions(with in class and as well as in parent-child pair)
	b) constructors(with in class only[thats y constructor only can overloading not overriding])
	c) operators(with in class)

2. Overriding :
	a) function only(in parent-child pair)
*/

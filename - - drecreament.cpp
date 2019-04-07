#include<iostream>
using namespace std;
class unary{
int var;
public:
	unary(int v):var(v){}
	unary operator --(){
		--var;
		return *this;
	}
	unary operator --(int){
		const unary t2(var);	
		var--;
		return t2;
	}
	int print(){
	return var;
	}
};

int main(){
unary t1(10);
cout<<"pre increment"<<endl;
cout<<(--t1).print()<<endl;
cout<<"post increament"<<endl;
cout<<(t1--).print()<<endl;
int k=t1.print();
cout<<k;
return 0;
}


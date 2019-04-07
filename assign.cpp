#include<iostream>
using namespace std;
class assign {
int a;
public:
	void put() {
		cin>>a;
	}
	 void operator= (assign t2){
		a=t2.a;
	}
	void print(){
		cout<<a<<endl;
	}
};
int main(){
assign t1,t2;
cout<<"enter the value of a"<<endl;
t2.put();
t1=t2;
t1.print();
//t2.print();
return 0;
}


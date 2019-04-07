#include<iostream>
using namespace std;
class complex {
	int a,b;
public:
	void read();
	void print();
	friend complex add(complex,complex);
};
int main() {
complex c1,c2,c3;
cout<<"enter the first complex nos";
c1.read();
cout<<"enter the second complex nos";
c2.read();
c3=add(c1,c2);
c3.print();
return 0;
}
void complex::read() {
cout<<"enter the real and img"<<endl;
cin>>a>>b;
}
void complex::print() {
cout<<"the result is";
cout<<a<<"+i"<<b;
}
complex add(complex c1,complex c2) {
complex res;
res.a=c1.a+c2.a;
res.b=c1.b+c2.b;
return res;
}

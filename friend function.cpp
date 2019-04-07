//friend fnction and mem. function
#include<iostream>
using namespace std;
class test {
int a,b;

public:
	 void fun();
	friend void fun1(test);
};

void test:: fun() {
a=5,b=6;
cout<<a<<b;
}

void fun1(test t1) {
cout<<t1.a<<t1.b;
}

int main(0 [
t1.fun();
fun1();
return 0;
}



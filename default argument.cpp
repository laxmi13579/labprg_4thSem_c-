//default argument assing 
#include<iostream>
using namespace std;
class test {


public:
	 void fun(test);
};

void test:: fun(int x1,int y1) {
cout<<x1<<y1;
}

int main() {
test t1;
int x=1,y=2;
fun();
fun(33);
fun(x,y);
return 0;
}



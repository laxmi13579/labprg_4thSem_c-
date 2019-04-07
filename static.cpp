//static variable
#include<iostream>
using namespace std;
class test {
	static int a;
public:
	void get();
};
int test:: a;
void test:: get() {
cout<<a;
}

int main() {
test t1;
t1.get();
return 0;
}


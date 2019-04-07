#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<cstdio>
#include<string.h>
using namespace std;
class test{
	int nos;	
	char name[20];
public:
	test(int n,char name1[20]) {
		nos=n; strcpy(name,name1);
	}
	void* operator new(size_t size){
		void *ptr;
		ptr=malloc(size);
	cout<<"size is allocated"<<endl;
	return ptr;
	}
	void operator delete(void* ptr) {
		free(ptr);
	}
};

int main() {
       	test *t1;
	t1=new test(10,"logan");
	delete t1;
	return 0;
}


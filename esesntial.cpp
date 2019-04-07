#include<iostream>
#include<string.h>
using namespace std;
class str  {
	char name[20];
public:
	void read();
	friend int cmp(str,str);
};

int main() {
int c;
str s1,s2;
cout<<"enter the first string"<<endl;
s1.read();
cout<<"enter the second string"<<endl;
s2.read();
c=cmp(s1,s1);
if(c==0)
	cout<<"strints is epqlkjflckdjsfa"<<endl;
else
	cout<<"string sre not equal"<<endl;
return 0;
}

void str:: read() {
//cout<<"enter the string"<<endl;
cin>>name;

}


int cmp(str t1,str t2) {
//s1=t1;
int a;
//s2=t2;
a=strcmp(t1.name,t2.name);
return a;
}



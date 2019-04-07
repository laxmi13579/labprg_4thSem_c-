#include<iostream>
#include<string.h>
using namespace std;
class sample {
char str[20];
public:
	void get(){
		cin>>str;
	}
	int operator==(sample s2);
};
int sample::operator==(sample s2) {
	if(strcmp(str,s2.str)==0)
		return 1;
	else
		return 0;
}
int main(){
sample s1,s2;
cout<<"first string"<<endl;
s1.get();
cout<<"second string"<<endl;
s2.get();
if(s1==s2)
	cout<<"equal"<<endl;
else
	cout<<"not equal"<<endl;
return 0;
}



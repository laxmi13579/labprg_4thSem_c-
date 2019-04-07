//static variable
#include<iostream>
using namespace std;
void statics(int);
void nonstatic(int);
void statics(int x){
	static int n=x;
	cout<<n<<endl;
	n++;
}
void nonstatic(int x){
		cout<<x<<endl;
		x++;
}
int main() {
int a=10,i;
cout<<"statics variable"<<endl;
for(i=0;i<5;i++)
	statics(a);
cout<<"non statics variable"<<endl;
for(i=0;i<5;i++)
	nonstatic(a);
return 0;
}




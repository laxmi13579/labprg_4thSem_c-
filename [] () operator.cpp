#include<iostream>
using namespace std;
class special{
int mark[3];
public:
	void get(){
		cout<<"enter the 3 subject marks"<<endl;
		cin>>mark[0]>>mark[1]>>mark[2];
	}
	int operator[](int pos){
		return (mark[pos]);
	}
	void operator() (){
		mark[0]=mark[0]+2;
		mark[1]=mark[1]+2;
		mark[2]=mark[2]+2;
		cout<<"after increasing "<<endl;
		cout<<mark[0]<<" "<<mark[1]<<" "<<mark[2];
	}
	
};
int main(){
special t1;
t1.get();
cout<<"the marks of 1 subjuct is:"<<t1[0]<<endl<<"the marks of 1 subjuct is:"<<t1[1]<<endl<<"the marks of 1 subjuct is:"<<t1[2]<<endl;
t1();
return 0;
}

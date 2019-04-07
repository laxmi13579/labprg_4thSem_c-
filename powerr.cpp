#include<iostream>
#include<math.h>
using namespace std;
double p;
int q;
class power{
double m1;
int m,n;
public:
	double first(double ,int);
	int second(int ,int);
	
};
double power::first(double a1,int b){
		m1=a1;n=b;
		p=pow(m1,n);
		return p;
	}
int power::second(int a,int b){
		m=a;n=b;
		q=pow(m,n);
		return q;
	}

int main() {
power p1;
double a1,k;
int a,b,c;
cout<<"enter the value of double a1 and int b"<<endl;
cin>>a1>>b;
k=p1.first(a1,b);
cout<<"the power of double and int is"<<k<<endl;
cout<<"enter the two intger a and b"<<endl;
cin>>a>>b;
c=p1.second(a,b);
cout<<"the power of two int is"<<c;
return 0;
}

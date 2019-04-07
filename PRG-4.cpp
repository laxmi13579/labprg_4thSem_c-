//addition of matrix by using static variable,default argument and friend function
#include<iostream>
using namespace std;
	int i,j;
class matrix {
	int a[10][10];
	static int m,n;
public:
	void read(int =2,int =2);
	void print();	
	friend matrix add(matrix t1, matrix t2);
};
int matrix::m;
int matrix::n;

int main() {

matrix t1,t2,t3;
int m1,n1;
cout<<"enter the first matrix"<<endl;
t1.read();

cout<<"enter the size of second matrix"<<endl;
cin>>m1>>n1;
cout<<"enter thes econd matrix"<<endl;
t2.read(m1,n1);
t3=add(t1,t2);
t3.print();
return 0;

}

void matrix:: read(int m1, int n1) {
m=m1;
n=n1;
for(i=0;i<m;i++) {
	for(j=0;j<n;j++) {
		cin>>a[i][j]; 
	}
}
}

void matrix:: print() {
cout<<"the matrix is"<<endl;
for(i=0;i<m;i++) {
	for(j=0;j<n;j++) {
		cout<<a[i][j]<<" ";
	}cout<<endl;
}
}

matrix add(matrix a1,matrix a2)  {
matrix a3;

for(i=0;i<a2.m;i++) {
	for(j=0;j<a2.n;j++)  {
		a3.a[i][j]=a1.a[i][j]+a2.a[i][j];
	}
}
return a3;
}


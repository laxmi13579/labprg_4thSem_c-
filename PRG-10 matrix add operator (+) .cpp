#include<iostream>
using namespace std;
int i,j;
class matrix{
int m,n,a[10][10];
public:
	matrix(){
		m=2;n=2;
		}
	void get() {
		
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
	}
	void print(){
		cout<<"the matrix is"<<endl;
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++){
				cout<<a[i][j];
			}
		}
	}
	
	matrix operator + (matrix s2){
		matrix s3; 
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++){
				s3.a[i][j]=a[i][j]+s2.a[i][j];
			}
		}
		return s3;
	}
};

int main() {
matrix s11,s12,s13;
cout<<"enter the first matrix"<<endl;
s11.get();
cout<<"enter the second matrix"<<endl;
s12.get();
s13=s11+s12;

s13.print();
return 0;
}
				

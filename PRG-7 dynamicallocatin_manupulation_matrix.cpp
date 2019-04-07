#include<iostream>
using namespace std;
int i,j;
class matrix 
{
	int row,col,**p;
	public:
	~matrix()
	{ 
		delete []p; 
	}
	matrix(int,int);
	matrix(matrix &);
	void print()
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++) 
			{
			cin>>p[i][j];
			}
		}
};
matrix::matrix(int row1,int col1) 
{
	row=m1.row1;
	col=m1.col1;
	p=new int*[row];
	for(i=0;i<row;i++)
		p[i]=new int[col];
	cout<<"enter the matrix is";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) 
		{
			cin<<p[i][j];
		}
	}
}
matrix::matrix(matrix &m4) 
{
	row=m4.row;
	col=m4.col;
	p=new int*[row];
	for(i=0;i<row;i++)
		p[i]=new int[col];
	cout<<"enter the matrix is";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) 
		{
			p[i][j]=m4.p[i][j];
		}
	}

}
int main() 
{
	matrix m1(2,2);
	matrix m2(m1);
	cout<<"the matrix is"<<endl;
	m1.print();
	cout<<"the matrix is"<<endl;
	m2.print();
	return 0;}





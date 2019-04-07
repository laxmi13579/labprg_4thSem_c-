#include<iostream>
using namespace std;

class book {
private:	
	int bknum;
	char bktitle;	
	float bkprice;
public:
	void readinput();
	void purchase();
	float total();
};


void book::readinput()  {
cout<<"enter the nos of book"<<endl;
cin>>bknum;
cout<<"enter the book title"<<endl;
cin>>bktitle;
cout<<"enter the book price"<<endl;
cin>>bkprice;
}

int book::purchase() {
int n;
cout<<"enter the nos of book to be purchase"<<endl;
cin>>n;
return n;
}

float book::total()  {
float c;
a=purchase();
c=a*bkprice;
return c;
}

int main() {
float c;
book b1;
b1.readinput();
b1.purchase();
c=b1.total();
cout<<"the total is"<<c;
return 0;
}


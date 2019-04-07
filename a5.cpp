#include<iostream>
using namespace std;

class book {
	static int bknum;
	int n;
	static char bktitle[20];	
	static float bkprice;
public:
	void readinput();
	void purchase();
	friend int total(book b1);
};
int book:: bknum,n;
char book:: bktitle[20];
float book:: bkprice;

int main() {
float c;
book b1,b2;
b1.readinput();
b1.purchase();
c=total(b1);
cout<<"the total price is="<<c;
return 0;
}

void book:: readinput()  {
cout<<"enter the book number"<<endl;
cin>>bknum;
cout<<"enter the book title"<<endl;
cin>>bktitle;
cout<<"enter the book price"<<endl;
cin>>bkprice;
}

int book:: purchase() {
int n;
cout<<"enter the nos of book to be purchase"<<endl;
cin>>n;
}

int total(book a1)  {
//cout<<"total price of book is="<<a1.n*a1.bkprice;
float c=0;
c=a1.n*a1.bkprice;
return c;
}

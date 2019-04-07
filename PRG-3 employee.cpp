#include<iostream>
using namespace std;
class employee {
private:
	char emp_name[20];
	int gross_salary,emp_id,basic_salary,all_allowance,income_tax,net_salary;
public:
	void getemp() {
	
		cout<<"enter the name of emloyee\n";
		cin>>emp_name;
		cout<<"enter the usn\n";
		cin>>emp_id;
		cout<<"enter basic salary\n";
		cin>>basic_salary;
		};
	void printemp() {

		cout<<"the employee name="<<emp_name<<endl;
		cout<<"emp_id="<<emp_id<<endl;
		cout<<"all allowance="<<all_allowance<<endl;
		cout<<"income tax="<<income_tax<<endl;
		cout<<"net salary="<<net_salary<<endl;
		};
	
	void cal_salary() {
		all_allowance=1.23*basic_salary;
		//cout<<"all allowance="<<all_allowance;
	
		gross_salary=basic_salary+all_allowance;
		income_tax=0.3*gross_salary;
		//cout<<"income tax="<<income_tax;

		net_salary=basic_salary+all_allowance-income_tax;
		//cout<<"net salary="<<net_salary;
		};
};

int main() {
int i,n;
employee e[10];
cout<<"enter the n\n";
cin>>n;
for(i=0;i<n;i++)
 {

e[i].getemp();
e[i].cal_salary();
e[i].printemp();
}
return 0;
}

	

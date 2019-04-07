#include<iostream>
#include<string.h>
using namespace std;
char str[20],stt[20];
int i,j,k;
class stringg{
char s1[20],s2[20];
int n;
public:
	void first(char st1[20], char st2[20]) {
		strcpy(s1,st1);
		strcpy(s2,st2);
		strcat(st1,st2);
		cout<<st1<<endl;//cout<<"the "<<s1+s2;
	}
	void first(char st1[20],char st2[20],int n1){
		n=n1;	/*	for(i=0;st1[i]!='\0';i++)
			s1[i]=st1[i];
		for(i=0;st2[i]!='\0';i++)
			s2[i]=st2[i];*/
		
		cout<<"s1="<<s1<<"s2="<<s2;
		for(i=0;i<n;i++)
			str[i]=s2[i];
		
		for(i=0;s1[i]!='\0';i++)
			stt[i]=s1[i];
		for(j=0,k=i;n>=0;k++,j++){
			stt[k]=str[j];
			n--;
		}stt[k]='\0';	
			
		cout<<"concat string is "<<stt<<endl;
			//cout<<"the concat is"<<stt;
	}
};
int main() {
stringg t1,t2;
int n1;
char st1[20],st2[20];
cout<<"enter the two string"<<endl;
cin>>st1>>st2;
t1.first(st1,st2);
cout<<"enter the size of n"<<endl;
		cin>>n1;
t1.first(st1,st2,n1);
return 0;
}

#include<iostream>
using namespace std;
int i;
template <class t> t min(t a1){
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;i++;
		}
		else
			i++;
return a[0];	}
}
int main(){
int a[20];
float b[20];
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the array integer"<<endl;
for(i=0;i<n;i++)
cin>>a;
cout<<"entert the array of float"<<endl;
for(i=0;i<n;i++)
cin>>b;
cout<<"the minimum of the geven integer is="<<min(a);
cout<<"the minimum of float is="<<min(b);
return 0;
}

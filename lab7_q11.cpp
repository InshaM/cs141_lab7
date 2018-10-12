//including in the  library
#include <iostream>
using namespace std;
int hcf(int m,int n){
	//giving conditions
	//finding the highest common factor (HCF)
	if(n!=0){
	return hcf(n,m%n);}
	//if any number is 0
	else{
	return m;}

}
int main(){
	int a,b;
	//asking for the two number
	cout<<"TYPE THE IST NUMBER : ";cin>>a;
	cout<<endl;
	cout<<"TYPE THE 2ND NUMBER : ";cin>>b;
	cout<<endl;
	//call for the function : the HCF
	cout<<"The hcf of the numbers "<<a<<" and "<<b<<" is "<<hcf(a,b)<<endl;
return 0;

}

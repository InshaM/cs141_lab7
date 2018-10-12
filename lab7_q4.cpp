//include library
#include <iostream>
using namespace std;
//function inside a function
int sum(int i){
	//providing the conditions
	if(i==0){
		return 0;	
	}
	else {
	return i+sum(i-1);
	}
}


int main (){
	int n;
	//ask the user a number
	cout<<"Enter a number: ";cin>>n;
	//printing the sum
	cout<<"The sum of the natural number to "<<n<<" is "<<sum(n)<<endl;
	return 0;
}


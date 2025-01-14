#include<iostream>
using namespace std;
int main(){
	cout<<"Enter + for addition\n";
	cout<<"Enter * for multiplicaion\n";
	cout<<"Enter - for subtraction\n";
	cout<<"Enter / for division\n";
	
	int a,b,x;
	char c;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Select Operation: ";
	cin>>c;
	
	if(c=='+'){
		x=a+b;
		cout<<"Result after addition is "<<x;
		}
	else if(c=='*'){
		x=a*b;
		cout<<"Result after multiplication is";
		}
	else if(c=='-'){
		x=a-b;
		cout<<"Result after sub is";
		}
	else if(c=='/'){
		x=a/b;
		cout<<"Result after division is";
		}
	else{
		cout<<"Invalid Operation";
	}
	
	return 0;
}

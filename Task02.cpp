#include <iostream>
using namespace std;

int main() {
	float num1,num2,res=0;
	char operation;
	
	cout<<"Enter the two numbers: ";
	cin>>num1>>num2;
	
	cout<<"Enter the Operation you want to perform: Chose among these(+,-,*,/)" << endl;
	cin>>operation;
	
	switch(operation)
	{
		case '+':
			res=num1+num2;
			break;
		case '-':
			res=num1-num2;
			break;
		case '*':
			res=num1*num2;
			break;
		case '/':
			res=num1/num2;
			break;
		default:
			break;
	}
	cout<<"Result of the operation is:"<<num1<<operation<<num2<<" = "<<res<<endl;
}
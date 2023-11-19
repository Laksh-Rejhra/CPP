#include <iostream>
using namespace std;
int main()
{
	// simple calculater with two integer only using switch case 
	
	char sym; // this is for taking arithmetic syembol
	int num,num1;
	cout<<"Enter the two number "<< endl;
	cin>>num>>num1;
	cout<<"Which arithmetic operation do you want *,/,+,-, press the button "<< endl;
	cin>>sym;
	
	switch(num,num1,sym)
	{
		case '+': cout<<"The sum of two number is = "<<num+num1;
		break;
		case '-': cout<<"The sub of two number is = "<<num-num1;
		break;
		case '*': cout<<"The mult of two number is = "<<num*num1;
		break;
		case '/': cout<<"The division of two number is = "<<num/num1;
		break;
		
		default : cout<<"You enter the wrong syembol ";
	}


}


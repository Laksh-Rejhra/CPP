#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the first number ";
	cin>>a;
	
	cout<<"Enter the second number ";
	cin>>b;
	
	
	for(int i=0; i<b; i++)
	{
		a++;
	}

	cout<<"The sum of two number is "<<a;
}


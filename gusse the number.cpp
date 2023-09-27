#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Gusse the Number " << endl;
	cin>>num;
	
	if(num==2)
	{
		cout<<"You won the game " << endl;
	}
	else
	{
		cout<<"You loss the game " << endl;
	}
	
	cout<<endl;
	
	cout<<"If you wanna play again press y otherwise press n "<< endl ;
	char x;
	cin>>x;
	
	if(x=='n')
	{
		cout<<"Have a nice day.."<< endl;
	}
	
	else{
		
		int num;
		cout<<"Gusse the Number " << endl;
		cin>>num;
	
	if(num==2)
	{
		cout<<"You won the game " << endl;
	}
	else
	{
		cout<<"You loss the game " << endl;
	}	
		
	}
	
	
}


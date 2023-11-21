#include <iostream>
using namespace std;
int main()
{
	// one dimensional array cin and cout using loop

	int arr[4];
	cout<<"Enter the numbers "<< endl;
	
	for(int i=0; i<4; i++)
	{
		cin>>arr[i];
	}	
	
	cout<<"The values which we gave using cin is: "<<endl;
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<" ";
	}
}


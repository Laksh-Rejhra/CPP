#include <iostream>
using namespace std;
int main()
{
	//bubble sort problem
	
	
	int arr[4]={1200,1232,3121,231};
	int temp;
	
	for(int i=0; i<4; i++)
	{
		for(int j=3; j>=0; j--)
		{
			if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}	
		}	
	}
	
	
	for(int i=0; i<4; i++)
	{
		cout<<arr[i]<<" ";
	}

}


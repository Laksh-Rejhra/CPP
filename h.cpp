#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout<<"Quardatic Equation "<< endl;
	
	int a,b,c, diter, x,y;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	cout<<"Enter the value of c = ";
	cin>>c;
	if(a==0 && b==0)
	{
		cout<<"This is not a Quadratic equation..";
	}
	else
	{
		diter = b*b - 4*a*c;
		if(diter >= 0)
		{
			x = (-b + sqrt(diter))/(2*a);
			y = (-b - sqrt(diter))/(2*a);
			cout<<"\n\nRoots are real." << endl;
			cout<<"Root 1 = " << x << endl;
			cout<<"Root 2 = " << y << endl;
		}
		else 
		{
			cout<<"Roots are not real.";
			
		}
	}
	
	return 0;
}

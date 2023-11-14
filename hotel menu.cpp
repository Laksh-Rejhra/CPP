#include <iostream>
using namespace std;
int main()
{

	string name[4]={"Biryani","Chicken karahi","white Chicken karahi","Green Chicken karahi"};

	
	int price[4]={200,500,400,800};

		cout<<"\t\t\tWelcome to our hotel"<< endl;
		cout<<"\t\t__________________________________"<< endl;
		cout<<endl;

	for(int i=0; i<4;i++ )
	{   cout<<i+1<<"- "<<name[i]<<" = ";
		cout<<" "<<price[i];
		cout<<endl;
	}
	cout<<endl;
	
	char alpha;
	cout<<"If you want to place your oder type Y ";
	cin>>alpha;
	
	int num,qty;
	
	if(alpha=='y' || alpha=='Y')
	{
			cout<<"Enter the item number ";
			cin>>num;
		if(num==1)
		{
			cout<<"Enter the quntity ";
			cin>>qty;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[0]<< endl;
			cout<<"Quintity = "<< qty << endl;
			cout<<"Your total bill is = "<< qty*price[0] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
		else if(num==2)
		{
			cout<<"Enter the quntity ";
			cin>>qty;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[1]<< endl;
			cout<<"Quintity = "<< qty << endl;
			cout<<"Your tota = "<< qty*price[1] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
		else if(num==3)
		{
			cout<<"Enter the quntity ";
			cin>>qty;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[2]<< endl;
			cout<<"Quintity = "<< qty << endl;
			cout<<"Your tota = "<< qty*price[2] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
			else if(num==4)
		{
			cout<<"Enter the quntity ";
			cin>>qty;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[3]<< endl;
			cout<<"Quintity = "<< qty << endl;
			cout<<"Your tota = "<< qty*price[3] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
	 } 
	 
	 
		char alpha1;
		cout<<"If you want to place your oder type Y ";
		cin>>alpha1;
			int num1,qty1;
	
			if(alpha1=='y' || alpha1=='Y')
	{
			cout<<"Enter the item number ";
			cin>>num1;
		if(num1==1)
		{
			cout<<"Enter the quntity ";
			cin>>qty1;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[0]<< endl;
			cout<<"Quintity = "<< qty1 << endl;
			cout<<"Your total bill is = "<< qty1*price[0] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
		else if(num1==2)
		{
			cout<<"Enter the quntity ";
			cin>>qty1;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[1]<< endl;
			cout<<"Quintity = "<< qty1 << endl;
			cout<<"Your tota = "<< qty1*price[1] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
		else if(num1==3)
		{
			cout<<"Enter the quntity ";
			cin>>qty1;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[2]<< endl;
			cout<<"Quintity = "<< qty1 << endl;
			cout<<"Your tota = "<< qty1*price[2] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
		
			else if(num1==4)
		{
			cout<<"Enter the quntity ";
			cin>>qty1;
			cout<<endl;
		
			cout<<"__________________________________"<< endl;
			cout<<"Item name  = "<< name[3]<< endl;
			cout<<"Quintity = "<< qty1 << endl;
			cout<<"Your tota = "<< qty1*price[3] << endl;
			cout<<"Thank you Have a nice day Sir/ma'am "<< endl;
			cout<<"__________________________________"<< endl;
		}
	 } 

}


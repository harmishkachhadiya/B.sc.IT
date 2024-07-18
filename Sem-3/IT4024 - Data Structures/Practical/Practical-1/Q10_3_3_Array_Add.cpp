#include <iostream>
using namespace std;

int main()
{
	int a[3][3];
	int b[3][3];
	int sum[3][3];
	
	cout<<"First Array"<<endl;
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			cout<<"enter num "<<i+1<<j+1<< " : ";
			cin>>a[i][j];
		}
	cout<<endl;
		
	cout<<"Second Array"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"enter num "<<i+1<<j+1<< " : ";
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}	
	cout<<endl;
	 	
	cout<<"Addition"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<sum[i][j]<<"  ";
			
		}
	cout<<endl;
	}	
	
	return 0;
}

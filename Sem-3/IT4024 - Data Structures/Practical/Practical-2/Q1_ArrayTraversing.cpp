#include <iostream>
#include <string>
using namespace std;

int main()
{
	string language[]={"DBMS","RDBMS","WEB","DATA STRUCTURE","MPI"};
	
	int size=sizeof(language)/sizeof(language[0]);
	int i=0;
	
	cout<<"using while loop"<<endl;
	while (i<size)
	{
		cout<<language[i]<< " ";
		i++;
	}
	
	cout<<endl;
	
	cout<<"using for loop"<<endl;
	for (int i=0;i<size;i++)
	{
		cout<<language[i]<< " ";
	}
	
	cout <<endl;
	
	
		
	return 0;
	
}


#include <iostream>
using namespace std;

int main()
{
    int percentage[] = {97, 55, 68, 71, 80};
    int size = sizeof(percentage) / sizeof(percentage[0]);
    int n;
    int temp[]={0,0,0,0,0};
    
   while(!0)
   { 
   cout<<"1 for Ascending, 2 for Descending, 0 for Exit"<<endl;  
   cout<<"Enter Choice : ";
   cin>>n;
   
    if (n==0)
    {
    	cout<<"Sucessfully Exited"<<endl;
   	break;
    }
    else if (n==1)
    {
	for (int i = 0; i < size; i++)
    	{
        	temp[i]=percentage[i];
    	}
    	cout<<"Before Ascending : ";
    	for (int i = 0; i < size; i++)
    	{
   	     cout << percentage[i] << " ";
   	 }
    
    	for (int i = size - 1; i > 0; i--)
    	{
     	   for (int j = 0; j < i; j++)
      	  {
            if (percentage[j] > percentage[j + 1])
      	      {
                int temp = percentage[j];
                percentage[j] = percentage[j + 1];
                percentage[j + 1] = temp;
              }
         }
       }
    	cout<<endl;
    	cout<<"After Ascending: ";
    	for (int i = 0; i < size; i++)
    	{
        	cout << percentage[i] << " ";
    	}
    
    	
    	for (int i = 0; i < size; i++)
    	{
        	percentage[i]=temp[i];
    	}
    	
    	cout<<endl;
    	cout<<endl;
    }
    
    
    else if (n==2)
    	{
    	
    	for (int i = 0; i < size; i++)
    	{
        	temp[i]=percentage[i];
    	}
    	cout<<"Before Descending : ";
    	for (int i = 0; i < size; i++)
    	{
        	cout << percentage[i] << " ";
    	}
    
    	for (int i = size - 1; i > 0; i--)
    	{
        	for (int j = 0; j < i; j++)
        	{
            		if (percentage[j] < percentage[j + 1])
            		{
               	 	int temp = percentage[j];
               	 	percentage[j] = percentage[j + 1];
               	 	percentage[j + 1] = temp;
            		}
        	}
    	}
    	
    	cout<<endl;
    	cout<<"After Descending: ";
    	for (int i = 0; i < size; i++)
    	{
        	cout << percentage[i] << " ";
    	}
    	
    	for (int i = 0; i < size; i++)
    	{
        	percentage[i]=temp[i];
    	}
    	cout<<endl;
    	cout<<endl;
    	
    	
    }
    
     else
     {
       cout<<"Invalid choice"<<endl;
       cout<<endl;
     }
   
       
   }	
    return 0;
}


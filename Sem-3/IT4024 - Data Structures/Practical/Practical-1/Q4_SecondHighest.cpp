#include <iostream>
using namespace std;

int firstlarge = 0;
int secondlarge = 0;

int findfirstLargest(int a[], int n)
{
        for(int i=0;i<n;i++)
        {
                if (firstlarge < a[i])
                {
                   firstlarge = a[i];
                }
        }
        
        return firstlarge;
}

int findsecondLargest(int a[], int n)
{
       // int firstlarge = 0;
       // int secondlarge = 0;
        
        for(int i=0;i<n;i++)
        {
                if (firstlarge < a[i])
                {
                   firstlarge = a[i];
                }
        }
        
        for(int i=0;i<n;i++)
        {
                if (a[i] > secondlarge and a[i] < firstlarge)
                {
                   secondlarge =a[i];
                }
        }
        
        return secondlarge;
}

int main()
{
        int n;
        
        cout<<"enter size of array:";
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
        {
                cout<<"enter number "<<i+1<<" : ";
                cin>>a[i];
        }
        
        
        cout<<"first largest :"<<findfirstLargest(a,n)<<endl;
        cout<<"second largest :"<<findsecondLargest(a,n)<<endl;
        
        return 0;
}


//sorting of array without using temporary variable
#include<iostream>
using namespace std;
class Sorting
{
	public:
		int size,i,j;	
		int arr[50] ;
		
	void getdata(){
		
		cout<<"Enter the size of array:";
		cin>>size;
	   	cout<<"Enter the array elements:"<<endl;
		for(i=0;i<size;i++)
		{
			cin>> arr[i];
		}
		
		
		cout<<"Before Sorting...."<< endl;
		
		for( i=0;i<size;i++)
		{
			cout<< arr[i] << " \t";
		}
		
	}
	
	void Logic()
	{
	
		
		for(int i =0;i<size;i++)
	    {
	    	for(int j=i+1;j<size;j++)
	    	{
	    		if(arr[i]>arr[j])
	    		{
	    			arr[i]= arr[i]+arr[j];
	    			arr[j]=arr[i]-arr[j];
	    			arr[i]=arr[i]-arr[j];
				}
			}
		}
	cout<<endl;
   }
   
   void display()
   {
   	cout<<"After Sorting...."<<endl;
   	
   	for(int i=0;i<size;i++)
   	
   	    {
   		cout<< arr[i]<<"\t";
	   }
   }
   
   
		
};


int main()
{
	Sorting obj;
	obj.getdata();
	obj.Logic();
	obj.display();
	
	return 0;
}

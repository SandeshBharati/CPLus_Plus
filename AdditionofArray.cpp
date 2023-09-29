#include<iostream>
using namespace std;
class Addition_Array
{
	
	public:
	int r1,r2,c1,c2;
	int i,j;
	
	void getdata()
	{
		cout<<"Enter the rows of first matrix:";
		cin>>r1;
		cout<<"Enter the columns of second matrix:";
		cin>>c1;
		cout<<"Enter the rows of second matrix:";
		cin>>r2;
		cout<<"Enter the columns of second matrix:";
		cin>>c2;
		
	}
	
	bool check()
	{
		return ( (r1==r2) && ( c1==c2) );
	}
	
	void calc()
	{
		int arr1[r1][c1],arr2[r2][c2],sum[r1][c1];
		
		cout<<"Enter the first array elements:"<<endl;
		 for(i=0;i<r1;i++)
		 {
		 	for(j=0;j<c1;j++)
		 	{
		 		cin>> arr1[i][j];
			 }
		 }
		 
		 
		 cout<<"Enter the second array elements:"<<endl;
		 for(i=0;i<r2;i++)
		 {
		 	for(j=0;j<c2;j++)
		 	{
		 		cin>> arr2[i][j];
			 }
		 }
		 
		 
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				sum[i][j]=arr1[i][j]+arr2[i][j];
			}
		}
		 
		 

	
        cout<<"The sum of two array elements in matrix form is:"<<endl;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cout<< sum[i][j]<<"\t";
			}
			cout<<endl;
		}
		
}
	
};

int main()
{
	Addition_Array obj;
	obj.getdata();
	if(obj.check() )
	{
	    obj.calc();	
	}
	
	else{
		cout<<"Addition is not possible.....";
	}
	
	return 0;
}

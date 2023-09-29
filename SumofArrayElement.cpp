//sum of array elements

#include<iostream>
using namespace std;
class Array_Addition
{
	public:
		
		int length=0,sum=0;
		
		void Calc()
		{
			
			int arr[] = { 10,20,5,4,2};
			length = sizeof(arr) / sizeof(arr[0]);
			cout<<"The length of array elements is:"<<length<<endl;
			
			
			for(int i=0;i<length;i++)
			{
				sum+=arr[i];
			}
			
		 } 
		 
		 void display()
		 {



		 	cout<<"The sum of array elements is:"<< sum<<endl;
		 }
};

int main()
{
	Array_Addition obj;
	obj.Calc();
	obj.display();
	 
	 return 0;
}



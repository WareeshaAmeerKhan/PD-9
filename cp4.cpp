#include<iostream>
using namespace std;
int i,j, size, digit;
main()
{	
	bool result=false;

	cout<<"Enter size of your array: ";
	cin>>size;
	
	int array[size];
	cout<<"Enter "<<size<<" numbers: ";
	for(i=0; i<size; i++)
	{
		cin>>array[i];
	}

	for(j=0; j<size; j++)
	{
	   if(array[j]==7)
	   {
		result=true;
		break;
	   }
	   else if(array[j]>9)
	   {
		digit=array[j];
		while(digit!=0)
		{
			digit=array[j]%10;
			array[j]=array[j]/10;
			if(digit==7)
			{
				result=true;
				break;
			}			
		 }
	    }
	}
	
	if(result)
	{
		cout<<"Boom!";
	}
	else
	{
		cout<<"There is no 7 in the array.";
	}
}
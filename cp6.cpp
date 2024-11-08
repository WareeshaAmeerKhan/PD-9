#include<iostream>
#include<string.h>
using namespace std;

int array[3];
int n;
int i,j,k;
int even, odd;
string result;

main()
{
	cout<<"Enter the array: \n";
	for(i=0; i<3; i++)
	{
		cin>>array[i];
	}

	cout<<"Enter the number of times even-odd transformation need to be done: ";
	cin>>n;

	for(j=0; j<3; j++)
	{
		for(k=0; k<n; k++)
		{
			if(array[j]%2==0)
			{
				array[j]=array[j]-2;
			}
			else
			{
				array[j]=array[j]+2;
			}
		}
	}

	for(int x=0; x<3; x++)
	{
		cout<<array[x]<<"\t";
	}
}
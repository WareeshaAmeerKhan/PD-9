#include<iostream>
using namespace std;

main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	
	string array[size];
	cout<<"Enter array elements(colors), 1 in each line: ";
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}

	int color_time,switch_time,time;
	color_time=0;
	switch_time=0;

	for(int j=0; j<size; j++)
	{
		color_time+=2;
	}

	for(int k=0; k<size; k++)
	{
		if(k+1==size)
		{
			break;
		}
		if(array[k]!=array[k+1])
		{
			switch_time+=1;
		}
	}
	
	time=color_time+switch_time;
	cout<<time;
}











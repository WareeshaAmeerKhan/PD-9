#include<iostream>
using namespace std;

string array[4];
int i,j,k;
string result;

main()
{
	cout<<"Enter 4 strings, one in each line: \n";
	for(i=0; i<4; i++)
	{
		cin>>array[i];
	}

	for(j=0; j<4; j++)
	{
		for(k=0; k<j; k++)
		{
			if(array[j]==array[k])
			{
				result="true";
			}
			else
			{
				result="false";
				break;
			}
		}
	}
	
	cout<<result;
}
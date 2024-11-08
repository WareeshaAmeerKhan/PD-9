#include<iostream>
using namespace std;
main()
{
	int i;
	string word;
	cout<<"Enter a String: ";
	cin>>word;
	
	int count=0;
	string output;

	for(i=0; word[i]!='\0'; i++)
	{
		count+=1;
	}

	if(count%2==0)
	{
		output="true";
	}
	else if(count%2!=0)
	{
		output="false";
	}

	cout<<output;
}
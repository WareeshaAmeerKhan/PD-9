#include<iostream>
#include<string.h>
using namespace std;

string s1;
string s2;
string result;
int count=0;

main()
{

	cout<<"Enter String 1: "<<endl;
	cin>>s1;
	cout<<"Enter String 2: "<<endl;
	cin>>s2;

	for(int i=0;s1[i] != '\0'; i++)
	{
		for(int j = 0; s2[j] != '\0'; j++){
			if(s1[i]==s2[j]){
			count++;
			s2[j] = 238;
			break;
			}	
		}
	}

	cout<<count;
}
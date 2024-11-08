#include<iostream>
using namespace std;

string MOVES[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
char PIN[4];
int i,j,x;
int count;
bool result;

void moves()
{
	for(x=0; x<4; x++)
	{
	   if(PIN[x]==0)
	   {
		count=PIN[x]-'0' + x;
		cout<<MOVES[count]<<"\t";
	   }
	
	   else
	   {
		count=(PIN[x]-'0' + x) % 10;
		cout<<MOVES[count]<<", ";
	   }
	}
}

main()
{
	cout<<"Enter PIN: ";
	cin>>PIN;

	for(j=0; j<4; j++)
	{
		if(PIN[j]>='0' && PIN[j]<='9')
		{
			result=true;
			if(j==3)
			{
				break;
			}
		}

		else
		{
			cout<<"Invalid Input!";
			result=false;
			break;
		}
	}
	
	if(result && PIN[4]=='\0')
	{
		moves();
	}
}
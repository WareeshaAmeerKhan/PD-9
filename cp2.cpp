#include<iostream>
using namespace std;
int main()
{
	string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
	string name;
	float discount, price;

	float ticket=500;
	int i;
	
	cout<<"Enter Movie name: ";
	cin>>name;	
	
	for(i=0; i<5; i++)
	{
		if(name==movie[i])
		{
			break;
		}
	}

	if(i==1 || i==3)
	{
		discount=0.05;
	}
	else
	{
		discount=0.10;	
	}

	price=ticket-(discount*ticket);
	cout<<"Price of ticket for "<<movie[i]<<" is: "<<price;
}
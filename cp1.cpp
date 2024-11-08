#include<iostream>
using namespace std;
int main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string name;
    int quantity;
    int bill=0;
    int i,j;

    cout<<"Enter the name of fruit: ";
    cin>>name;
    cout<<"Enter the quantity: ";
    cin>>quantity;

    for(i=0; i<4; i++)
    {
        if(name==fruit[i])
        {
            for(j=0; j<quantity; j++)
            {
                bill=bill+price[i];
            }
        }
    }

    cout<<endl<<"Fruit \t Quantity \t Price"<<endl<<endl;
    cout<<name<<"   \t"<<quantity<<"      \t"<<bill;
} 
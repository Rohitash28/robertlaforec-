#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int pence, shill;
	float dollar,penny,tpenny,pounds;
	cout<<"Enter Pounds: ";
	cin>>pounds;
	cout<<endl<<"Enter Shillings: ";
	cin>>shill;
	cout<<endl<<"Enter pence: ";
	cin>>pence;
	penny = (12*shill)+pence;
	tpenny = penny/100;
	dollar = pounds + tpenny;
	cout<<endl<<"Decimal pounds = \x9c"<<dollar;
	
}

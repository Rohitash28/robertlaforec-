#include<iostream>
using namespace std;
int main(){
	// There are 7.481 gallons in a cubic foot . Display the equivalent in cubic feet.
	// 7.481 gallon = 1 cubic feet .
	// 1 cubic feet = 7.481*gallons
	int gallons, cubic_feet;
	cout<<"Enter the value of gallons: ";
	cin>>gallons;
	cubic_feet = gallons * 7.481;
	cout<<endl<<"Equivalent of:"<<gallons<<" gallons in cubic feet is :"<<cubic_feet<<endl;
	return 0;
	
}

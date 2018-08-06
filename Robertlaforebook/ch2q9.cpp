#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	char hulu;
	cout<<"Enter First Fraction: ";
	cin>>a>>hulu>>b;
	cout<<endl<<"Enter second Fraction: ";
	cin>>c>>hulu>>d;
	e = a*d + b*c;
	f= b*d;
	cout<<endl<<"sum is: "<<e<<"/"<<f;
	
}

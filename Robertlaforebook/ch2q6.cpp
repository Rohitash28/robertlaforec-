#include<iostream>
#include<iomanip>
#include<ctype.h>
#include<cmath>
using namespace std;
int main(){
	int usdollar, british, french, german, japanese;
	cout<<"Enter the amount in US Dollars";
	cin>>usdollar;
	british = 1.487 * usdollar;
	french = 0.172 * usdollar;
	german =  0.584 * usdollar;
	japanese = 0.0095 * usdollar;
	cout<<"Your currucy equivalents in diffrent countries are :"<<endl;
	cout<<" British country equivalent: "<<british<<endl<<" French country equivalent:"<<french<<endl;
	cout<<"German country equivalent:"<<german<<endl<<"Japanese country equivalent:"<<japanese<<endl;
	
}

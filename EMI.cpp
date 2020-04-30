#include<iostream>
using namespace std;
int main()
{
	float a;
	float b,c;
	float d,f;
	int i;
	
	cout<<"enter the total amount : ";
	cin>>a;
	cout<<"enter the interest rate in percentage : ";
	cin>>d;
	cout<<"enter the total number of months you think to take EMI : ";
	cin>>c;
	f=(a*d)/100;
	cout<<"Extra amount you have to give for one month : "<<f<<endl;
	if(d==0){
		
	
	for(i=0;i<c;i++)
	{
		a+=f;
	}
		cout<<"total extra amount to pay : "<<a<<endl;
	cout<<"the amount you have to give for each month  : "<<a/c;
	}
else{

	cout<<"total extra amount to pay : 0 "<<endl;
	cout<<"the amount you have to give for each month  : "<<a/c;
}
return 0;}

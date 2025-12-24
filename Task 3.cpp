#include<iostream>
using namespace std;
int main()
{
	double balance;
	bool isLoyal;
	cout<<"Enter account balance: $";
	cin>>balance;
	cout<<"Is the customer loyal?( 1 for yes , 0 for no) : ";
	cin>>isLoyal;
	string accountType = (balance < 100) ? "Low Balance":(balance <=500) ?"Standard Account":"Premium Account";
	string offerEligibility = (balance > 200 && isLoyal) ? "eligible for a special offer":"not eligible for a special offer";
	cout<< "Account Type:" <<accountType<< endl;
	cout<<"The customer is "<<offerEligibility<<"."<<endl;
	return 0;
	
}

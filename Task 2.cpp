#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age : "<<endl;
	cin>>age;
	string category;
	category =  (age <13) ?"Child" :(age >=13 && age <=19)? "teenager ":"Adult";
	cout<<" Age "<<age<<" falls under the category :"<<category <<"."<<endl;
	return 0;
}

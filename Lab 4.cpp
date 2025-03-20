//program1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
/*
{
	int num1,num2;
	cout<<"Enter the first integer"<<endl;
	cin>>num1;
	cout<<"Enter the second integer"<<endl;
	cin>>num2;
	(num1 % 2==0)? cout<<"The number" << num1 << "is an even number": cout<<"The number "<<num1<<" is an odd number\n";
	(num2 % 2!=0)? cout<<"The number" << num2 << "is an odd number" :  cout<<"The number "<<num2<<" is not an odd number\n"<<endl;
	return 0;
}
*/
//program 2

{
	int age1,age2,age3;
	cout<<"Enter age1\n";
	cin>>age1;
	cout<<"Enter age2\n";
	cin>>age2;
	cout<<"Enter age3\n";
	cin>>age3;
	(age1<=10)? cout<<"Age under 10 falls in the category of Child" : cout<<"Not a child"<<endl;
	
	(age2<15)? cout<<"Age under 15 falls in the category of Teenager" : cout<<"Not a Teenager"<<endl;
	
	(age3<=20)? cout<<"Age under 25 falls in the category of Adult" : cout<<"Not a Adult"<<endl;
	return 0;
}

/*
{
bool loyalty;
int amount,accounttype,balance;
cout<<"Enter Balance"<<endl;
cin>>balance;
cout<<"Enter your loyalty status"<<endl;
cin>>loyalty;
(balance<=100)? cout<<"Balance is low"<<endl: cout<<"Balance is not low"<<endl;
(balance>100 && balance<5000)? cout<<"Account is standard": cout<<"Account is not standarad"<<endl;
(balance>500)? cout<<"Account is premium": cout<<"Account is not premium"<<endl;

cout<<"----------------------------------------------------------------------------------------------------------\n"<<endl;
(balance>200)? cout<<"\t\tYou are eligible for special offer": cout<<"You are not eligible for special offer"<<endl;
(loyalty==1)?  cout<<"You are loyal": cout<<" you are not loyal"<<endl;
(loyalty==0)? cout<<"you are not loyal": cout<<"Disloyal"<<endl;
getch();
return 0;
}
*/

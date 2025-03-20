//program 1

/*#include<iostream>
using namespace std;
int main()
{
	float item1,item2,item3,item4,item5,Subtotal,SalesTax,Total;
	item1=12.95;
	item2=24.95;
	item3=6.95;
	item4=14.95;
	item5=3.95;
	Subtotal=item1+item2+item3+item4+item5;
	SalesTax=Subtotal*6/100;
	Total=Subtotal+SalesTax;
	cout<<"Price of item 1: $"<<item1<<endl;
	cout<<"Price of item 2: $"<<item2<<endl;
	cout<<"Price of item 3: $"<<item3<<endl;
	cout<<"Price of item 4: $"<<item4<<endl;
	cout<<"Price of item 5: $"<<item5<<endl;
	cout<<"Subtotal:"<<Subtotal<<endl;
	cout<<"Sales Tax (6%): $"<<SalesTax<<endl;
	cout<<"Total: $"<<Total<<endl;	
	return 0;
}
*/
/*
//program2


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float num1,num2,num3,average;
	num1=85.5;
	num2=90.75;
	num3=88.25;
	cout<<fixed<<setprecision(2)<<endl;
	average=(num1+num2+num3)/3;
	cout<<"The average of "<<num1<<", "<<num2<<" and "<< num3<<" ="<< average<<endl;
	return 0;
}
*/
/*

//program 3

#include<iostream>
using namespace std;
int main()
{
	int Number1,Number2,Addition, Subtraction, Multiplication, Division, Moduls;
	cout<<"Enter two numbers:"<<endl;
	cout<<"Number1:"; cin>>Number1;
	cout<<"Number2:"; cin>>Number2;
	Addition=Number1+Number2;
	Subtraction=Number1-Number2;
	Multiplication=Number1*Number2;
	Division=Number1/Number2;
	Moduls=Number1%Number2;
	
	cout<<"\tAddition:\n\t\t"<<Number1<<"+"<<Number2<<"="<<Addition<<endl;
	cout<<"\tSubtraction:\n\t\t"<<Number1<<"-"<<Number2<<"="<<Subtraction<<endl;
	cout<<"\tMultiplication:\n\t\t"<<Number1<<"*"<<Number2<<"="<<Multiplication<<endl;
	cout<<"\tDivision:\n\t\t"<<Number1<<"/"<<Number2<<"="<<Division<<endl;
	cout<<"\tModuls:\n\t\t"<<Number1<<"%"<<Number2<<"="<<Moduls<<endl;

	return 0;
	
*/

//program 4

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Weight, Height, BMI, K;
	
cout<<"BMI calculator"<<endl;
	
cout<<"-------------------"<<endl;

cout<<"Enter your weight in Kilograms:"<<endl;
cin>>Weight;
cout<<"Enter your height in meters:";
cin>>Height;
K=Height*Height;
BMI=Weight/K;
cout<<fixed<<setprecision(4)<<endl;
cout<<"Your BMI is:"<<BMI<<endl;
return 0;
}
*/

//program 5

#include<iostream>
using namespace std;
int main()
{
	float Distance, Vehiclefuel, perliterfuel,Tripcost,Total;
	cout<<"Trip Cost Estimator"<<endl;
cout<<"--------------------------"<<endl;
cout<<"Enter distance of the trip in Kilometers:"; cin>>Distance;
cout<<"Enter vehicles fuel efficiency (km per liter):"; cin>>Vehiclefuel;
cout<<"Enter fuel's cost per liter:"; cin>>perliterfuel;
Total=(Distance)/Vehiclefuel*perliterfuel;
cout<<"Total trip cost:"<<Total<<endl;
return 0;
}



	

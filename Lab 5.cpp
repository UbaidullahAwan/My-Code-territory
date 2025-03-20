#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int service,gradea,gradeb,gradec,tax,grosssalary,bonuses,s1,s2,s3,s4,s5,s6;
	string name;
	char grade;
	gradea=50000;
	gradeb=30000;
	gradec=20000;
	cout<<"Enter your good name:"<<endl;
	cin>>name;
	cout<<"Enter your grade:"<<endl;
	cin>>grade;
	cout<<"Enter your service years\n";
	cin>>service;
    if(grade == 'A')
    	{
    		cout<<"Your basic salary is:$"<<gradea<<endl;
	}
	 if(grade == 'B')
    	{
    		cout<<"Your basic salary is:$"<<gradeb<<endl;
	}
	 if(grade == 'C')
    	{
    		cout<<"Your basic salary is:$"<<gradec<<endl;
	}
	s1=gradea*10/100;
	s2=gradea+s1;
	if(service>10 && grade == 'A')
	{		cout<<"After an addition of 10% bonus, you salary is:"<<s1<<endl;
			return 0;
			getch();
	}
	s3=gradeb*5/100;
	s4=gradeb+s3;
	{
		cout<<"After an addition of 5% bonus, your salary is:"<<s2<<endl;
	}
		
	
	return 0;
	
}
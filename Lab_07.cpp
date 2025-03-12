//----------------------------------------------Program 01------------------------------------------------------------//
#include<iostream>
using namespace std;
int main()
/*
{
	int num1;
	cout<<"Enter an integer: \n";
	cin>>num1;
	if(num1>0)
	{
		cout<<"The number you entered is positive"<<endl;
	}
	else if(num1<0)
	{
		cout<<"The number you entered is negative"<<endl;
	}
	else if (num1 == 0)
	{
		cout<<"The number you entered is zero"<<endl;
	}
	
	return 0;
}
/*

//-----------------------------------------------------------------program 2---------------------------------//

/*
{
	
		float temperature;
		cout<<"Enter your temperature in celsius"<<endl;
		cin>>temperature;
		if(temperature>=40)
		{
			cout<<"Your temperature is high. Stay indoor as your outings may cause you serious health condition"<<endl;
		}
		if(temperature>30 && temperature<39)
		{
			cout<<"Drink plenty of water to stay hydrated in hot weather"<<endl;
		}
		if(temperature>20 && temperature<29)
		{
			cout<<"The weather is pleasant appropriate for outdoor activities"<<endl;
		}4
		if(temperature=<20)
		{
			cout<<"Wear warm clothes to say safe in cool weather"<<endl;
		}
		return 0;
	}
	*/
	
	//----------------------------------------program 3------------------------------------------------------------//
	
	{
		string username,password;
		 username="admin";
		 password="12345";
		
		cout<<"\t\t\tLogin System\n\n";
		cout<<"Enter User name: ";
		cin>>username;
		cout<<"Enter password: ";
		cin>>password;
		if(username == "admin" && password == "12345")
		{
			cout<<"Access granted";
		}
		else if(username != "admin")
		{
			cout<<"Username not found"<<endl;
		}
		if(password != "12345")
		{
			cout<<"wrong password"<<endl;
		}
		return 0;
	}


//-------------------------------------------program 4----------------------------------------------------------//
/*
{
	char grade;
	int marks1,marks2,marks3,Obtainedmarks,Totalmarks=300,percentage;
	cout<<"Enter your marks of subject 1: "<<endl;
	cin>>marks1;
	cout<<"Enter your marks of subject 2:"<<endl;
	cin>>marks2;
	cout<<"Enter your marks of subject 3: "<<endl;
	cin>>marks3;
	Obtainedmarks=marks1+marks2+marks3;
	cout<<"your total marks are: "<<Obtainedmarks<<endl;
	if(Obtainedmarks<130)
	{
		cout<<"Your grade is F, and your are declared as 'Failed'"<<endl;
		return 0;
	}
	
	percentage=Obtainedmarks*100/Totalmarks;
	cout<<"Your percentage is: "<<percentage<<endl;
	if(percentage>=90)
	{
		cout<<"Your grade is A"<<endl;
	}
	if(percentage>=80 && percentage< 90)
	{
		cout<<"Your grade is B"<<endl;
	}
	if(percentage>=70 && percentage<80)
	{
		cout<<"Your grade is C"<<endl;
	}
	if(percentage>=60 && percentage<70)
	{
		cout<<"Your grade is D"<<endl;
	}
	if(percentage>=50 && percentage<60)
	{
		cout<<"Your grade is E"<<endl;
	}
	if(percentage<=40)
{
	cout<<"Your grade is F, and your are failed"<<endl;
}
	if(marks1<40)
	{
		cout<<"As your marks are less than 40 in subject1, You are declared as failed"<<endl;
	}
		if(marks2<40)
	{
		cout<<"As your marks are less than 40 in subject2, You are declared as failed"<<endl;
	}
		if(marks3<40)
	{
		cout<<"As your marks are less than 40 in subject3, You are declared as failed"<<endl;
	} 
	
	//program's body for the grade of subject 1
	if(marks1>=90)
	{
		cout<<"Your grade in subject 1 is A"<<endl;
	}
		else if(marks1>=80 && marks1<70)
	{
		cout<<"Your grade in subject 1 is B"<<endl;
	}
		else if(marks1>=70 && marks1<80)
	{
		cout<<"Your grade in subject 1 is C"<<endl;
	}
		else if(marks1>=60 && marks1<70)
	{
		cout<<"Your grade in subject 1 is D"<<endl;
	}
		else if(marks1>=50 && marks1<60)
	{
		cout<<"Your grade in subject 1 is D"<<endl;
	}
			else if(marks1<40)
	{
		cout<<"Your grade in subject 1 is F"<<endl;
	}
	//grade of subject 2
	
	if(marks2>=90)
	{
		cout<<"Your grade in subject 2 is A"<<endl;
	}
		else if(marks2>=80 && marks2<70)
	{
		cout<<"Your grade in subject 2 is B"<<endl;
	}
		else if(marks2>=70 && marks2<80)
	{
		cout<<"Your grade in subject 2 is C"<<endl;
	}
		else if(marks2>=60 && marks2<70)
	{
		cout<<"Your grade in subject 2 is D"<<endl;
	}
			else if(marks2>=50 && marks2<60)
	{
		cout<<"Your grade in subject 2 is D"<<endl;
	}
			else if(marks2<40)
	{
		cout<<"Your grade in subject 2 is F"<<endl;
	}
	//program for subject 3 grade
	
	if(marks3>=90)
	{
		cout<<"Your grade in subject 3 is A"<<endl;
	}
		else if(marks3>=80 && marks3<70)
	{
		cout<<"Your grade in subject 3 is B"<<endl;
	}
		else if(marks3>=70 && marks3<80)
	{
		cout<<"Your grade in subject 3 is C"<<endl;
	}
		else if(marks3>=60 && marks3<70)
	{
		cout<<"Your grade in subject 3 is D"<<endl;
	}
		else if(marks3>=50 && marks3<60)
	{
		cout<<"Your grade in subject 3 is D"<<endl;
	}
			else if(marks3<40)
	{
		cout<<"Your grade in subject 3 is F"<<endl;
	}
	
	//Grade assigning process terminates here 
	
	
	if(Obtainedmarks>=240)
	{
		cout<<"Your are eligible for the merit-based as well as regular scholarship"<<endl;
	}
	else if(Obtainedmarks<240)
	{
		cout<<"You aren't eligible for the merit as well as regular-based scholarship"<<endl;
	}

	return 0;
}
*/
//--------------------------------------------------Program 05-----------------------------------------------------//

#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income: $";
    cin >> income;

    if (age < 18) {
        cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
    } else {
        if (income < 30000) {
            cout << "You meet the age requirement but are not eligible for a loan because your income is below $30,000." << endl;
        } else {
            cout << "Congratulations! You are eligible for a loan." << endl;
        }
    }

    return 0;
}
//-------------------------------------------------------Program 06--------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, role;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;
    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!" << endl;

        cout << "Enter your role (Admin, Guest, or other): ";
        cin >> role;

        if (role == "Admin") {
            cout << "Full Access" << endl;
        } else if (role == "Guest") {
            cout << "Limited Access" << endl;
        } else {
            cout << "No Access" << endl;
        }
    } else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
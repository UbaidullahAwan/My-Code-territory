//------------------------------------------------------------Program # 01----------------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<endl;
	}
	return 0;
}
*/
//-----------------------------------------------------------Program # 02-------------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=1;
	cout<<"Enter a number you want to have table of: ";
	cin>>num;
	cout<<"Table of a number "<<num<< "upto 10 is:"<<endl;
	for(int i=count; count<=10;count++)
	{
		cout<<num<<"*"<<count<<"="<<num*count<<endl;
	}
	return 0;
	
}
*/
//--------------------------------------------------------Program # 03---------------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
int main()
{
	int num, sum=1, result=0;
	cout<<"Enter the number of natural numbers you want to have sum of"<<endl;
	cin>>num;
	for(int i=sum; sum<=num; sum++)
	{
		result+=sum;
	}
	cout<<result<<endl;
	return 0;
	
}
*/
//--------------------------------------------------------Program # 04----------------------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int rows = 4, columns = 4; 
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) { 
            cout << "* "; 
        }
        cout << endl; 
    }

    return 0;
}
															Part B
															
#include <iostream>
using namespace std;

int main() {
    int rows;

    
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/
//--------------------------------------------------------program # 05--------------------------------------------------------------------------------------//



#include<iostream>
using namespace std;
int main()
{
	int num, fact=1;
	cout<<"Enter a number you want to know factorial of!!"<<endl;
	cin>>num;
	if(num<0){
		cout<<"Please enter a positive number"<<endl;
		return 0;
	}
	for(int i=1; i<=num;i++){
		fact*=i;
	}
	cout<<"The factorial of a number "<<num<< " is: "<< fact<<endl;
	return 0;
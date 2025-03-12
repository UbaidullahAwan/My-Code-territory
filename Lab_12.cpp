//------------------------------------------------------------Program 01-----------------------------------------------------------------------//
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<"The square of the "<<num<< "is:"<<sqrt(num)<<endl;
	cout<<"The Absolute value of the "<<num<< "is:"<< abs(num)<<endl;
	cout<<"The sin of the "<<num<< "is:"<< sin(num)<<endl;
	cout<<"The cos of the "<<num<< "is:"<< cos(num)<<endl;
	cout<<"The Power of the 3 of "<<num<< "is:"<< pow(num,3)<<endl;
	return 0;
}
*/
//-----------------------------------------------------------Program 02-----------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int myfunction(){
	cout<<"Hello, Welcome to cpp funcions!"<<endl;
}
int main(){
	myfunction();
	return 0;
}
*/
//-------------------------------------------------------------Program 03---------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int checkevenodd(int number){
	if(number %2 == 0){
		cout<<"The " <<number<< "you have entered is even"<<endl;
	}
		else if(number % 3==0){
			cout<<"The "<<number<< " you have entered is odd"<<endl;
		}
}

int main(){
	int usernumber;
	cout<<"Enter a number to check that either its is even or odd:  ";
	cin>>usernumber;
	
	checkevenodd(usernumber);
	
	return 0;
}
*/
//-------------------------------------------------------------Program 04---------------------------------------------------------------------//
/*#include<iostream>
using namespace std;
int fact(int n){				//Here I have declared a function "fact" with a parameter "int n"
	int factorial=1;			//In this step, I have done both initialization and declaration of variable
	for(int i=1; i<=n;++i){		//In ths step, I have used for loop just to carry out iteration. 
		factorial*=i;			
	}
	return factorial;
}
int main(){
	int number;
	cout<<"Enter a number you want to compute factorial of: ";
	cin>>number;
	if(number<0){
		cout<<"Invalid number"<<endl;
	}else
{
	cout<<"The factorial of the "<<number<< "is: "<< fact(number)<<endl;
}
return 0;
}
*/
//-----------------------------------------------------------Program 05----------------------------------------------------------------------------//

#include<iostream>
#include<cmath>
using namespace std;

int display_menu(){
	cout<<"CASIO CALCULATOR MENU"<<endl;
	cout<<"1.\tAddition"<<endl;
	cout<<"2.\tSubtraction"<<endl;
	cout<<"3.\tMultiplication"<<endl;
	cout<<"4.\tDivision"<<endl;
	cout<<"5.\tExit"<<endl;
}
;

int sum(double x, double y){
	return x+y;
};

int sub(double x, double y){
	return x-y;
};
int mul(double x, double y){
	return x*y;
};
double div(double x, double y){
	return x/y;
};


int main(){
	
	int a,b;
	char op;
	
	
	cout<<"Enter two number one by one"<<endl;
	cin>>a>>b;
	cout<<"Enter the arithmetic operation you want to perform"<<endl;
	cin>>op;
	switch(op){
		case '+':
		cout<<"The sum is: "<<sum(a,b)<<endl;
		break;
		
		case '-':
		cout<<"The subtraction is: "<<sub(a,b)<<endl;
		break;
		
		case '*':
		cout<<"The Mul is: "<<mul(a,b)<<endl;
		break;
		
		case '/':
		cout<<"The div is: "<<div(a,b)<<endl;
		break;
		
	
		default:
			cout<<"Please enter a valid arithmetic operation"<<endl;
	}
	return 0;
}

//---------------------------------------------------------------Program 06-----------------------------------------------------------------//

#include <iostream>
#include <iomanip>
using namespace std;


void displayMenu() {
    cout << "Welcome to the Restaurant!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Burger - $5.00" << endl;
    cout << "2. Pizza - $8.00" << endl;
    cout << "3. Pasta - $7.00" << endl;
    cout << "4. Salad - $4.00" << endl;
    cout << "5. Soda - $1.50" << endl;
    cout << "6. Exit" << endl;
}


double calculateItemCost(double price, int quantity) {
    return price * quantity;
}


double calculateFinalBill(double subtotal) {
    double serviceCharge = subtotal * 0.10;
    return subtotal + serviceCharge;
}

int main() {
    int choice, quantity;
    double totalCost = 0.0;
    double prices[] = {5.00, 8.00, 7.00, 4.00, 1.50};

    while (true) {
        displayMenu();
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 6) {
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        double itemCost = calculateItemCost(prices[choice - 1], quantity);
        totalCost += itemCost;

        cout << "Item cost: $" << fixed << setprecision(2) << itemCost << endl;
    }

    double finalBill = calculateFinalBill(totalCost);
    cout << "Subtotal: $" << fixed << setprecision(2) << totalCost << endl;
    cout << "Final bill (including 10% service charge): $" << finalBill << endl;

    return 0;
}
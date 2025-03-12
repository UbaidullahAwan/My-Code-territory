//--------------------------------------------------------------------Program 01----------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;

    cout << "Enter a number (N): ";
    cin >> N;

    cout << "Numbers from 1 to " << N << " are:" << endl;
    while (i <= N) {
        cout << i << " ";
        i++; 
    }

    cout << endl; 
    return 0;
}
*/

//------------------------------------------------------------------Program 02-------------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int number, i = 1;

    
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    
    cout << "Multiplication table of " << number << ":" << endl;
    while (i <= 10) {
        cout << number << " x " << i << " = " << (number * i) << endl;
        i++; 
    }

    return 0;
    
}
*/

//----------------------------------------------------------------Program 03----------------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number > 0) {
            break; 
        } else {
            cout << "Wrong input! Please enter a positive number." << endl;
        }
    }
    cout << "You entered a valid positive number: " << number << endl;

    return 0;
}
*/
//--------------------------------------------------------------Program 4-----------------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int sum = 0; 
    int i = 1;   

    while (i <= 5) {
        sum += i; 
        i++;      
    }
    cout << "The sum of the first five natural numbers is: " << sum << endl;

    return 0;
}
*/

//-----------------------------------------------------------Program 5-------------------------------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; 
    int choice;
    double amount;

    while (true) {
     
        cout << "\nWelcome to the Banking System" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive number." << endl;
                }
                break;

            case 2: 
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawal successful. New balance: $" << balance << endl;
                    } else {
                        cout << "Insufficient balance. Current balance: $" << balance << endl;
                    }
                } else {
                    cout << "Invalid amount. Please enter a positive number." << endl;
                }
                break;

            case 3: 
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4: 
                cout << "Thank you for using the Banking System. Goodbye!" << endl;
                return 0;

            default: 
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
        }
    }

    return 0;
}
*/
//---------------------------------------------------------------------Program 06---------------------------------------------------------------------------//
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "Secure123"; 
    string userPassword;

    do {
        
        cout << "Enter the password: ";
        cin >> userPassword;

      
        if (userPassword != correctPassword) {
            cout << "Incorrect password. Please try again." << endl;
        }
    } while (userPassword != correctPassword); 
    cout << "Password accepted. Access granted!" << endl;

    return 0;
}
*/
//--------------------------------------------------------------Program 07----------------------------------------------------------------------------//


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, subChoice, quantity;
    double totalBill = 0.0;
    char continueOrder;
    // Creating three-dimensional array
    const double prices[3][3] = {
        {5.00, 7.00, 8.00}, 
        {2.00, 3.00, 4.00}, 
        {3.00, 4.00, 5.00}  
    };

    do {
        
        cout << "\nWelcome to the Restaurant!" << endl;
        cout << "1. Main Course" << endl;
        cout << "2. Drinks" << endl;
        cout << "3. Desserts" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            break; 
        }

        if (choice < 1 || choice > 3) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "\nSubmenu:" << endl;
        switch (choice) {
            case 1:
                cout << "1. Chicken Karahi - $5.00 per KG" << endl;
                cout << "2. Beef Steak - $7.00 per KG" << endl;
                cout << "3. Vegetable Curry - $8.00 per KG" << endl;
                break;
            case 2:
                cout << "1. Water - $2.00 per bottle" << endl;
                cout << "2. Soda - $3.00 per can" << endl;
                cout << "3. Juice - $4.00 per glass" << endl;
                break;
            case 3:
                cout << "1. Ice Cream - $3.00 per scoop" << endl;
                cout << "2. Cake - $4.00 per slice" << endl;
                cout << "3. Fruit Salad - $5.00 per bowl" << endl;
                break;
        }

        cout << "Enter your submenu choice (1-3): ";
        cin >> subChoice;

        if (subChoice < 1 || subChoice > 3) {
            cout << "Invalid submenu choice. Please try again." << endl;
            continue;
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Invalid quantity. Please enter a positive number." << endl;
            continue;
        }

        double itemCost = prices[choice - 1][subChoice - 1] * quantity;
        totalBill += itemCost;

        cout << "Item cost: $" << fixed << setprecision(2) << itemCost << endl;
        cout << "Do you want to order more items? (y/n): ";
        cin >> continueOrder;

    } while (continueOrder == 'y' || continueOrder == 'Y');

    cout << "\nTotal bill: $" << fixed << setprecision(2) << totalBill << endl;
    cout << "Thank you for dining with us!" << endl;

    return 0;
}
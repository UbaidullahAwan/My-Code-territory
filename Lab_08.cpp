//----------------------------------------------------Program 01--------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

  
    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator. Please enter one of the following: +, -, *, /" << endl;
            break;
    }

    return 0;
}
*/
//--------------------------------------------------------------Program # 02----------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1-7) to display the corresponding day of the week: ";
    cin >> day;


    switch (day) {
        case 1:
            cout << "Day " << day << " is Monday." << endl;
            break;
        case 2:
            cout << "Day " << day << " is Tuesday." << endl;
            break;
        case 3:
            cout << "Day " << day << " is Wednesday." << endl;
            break;
        case 4:
            cout << "Day " << day << " is Thursday." << endl;
            break;
        case 5:
            cout << "Day " << day << " is Friday." << endl;
            break;
        case 6:
            cout << "Day " << day << " is Saturday." << endl;
            break;
        case 7:
            cout << "Day " << day << " is Sunday." << endl;
            break;
        default:
            cout << "Error: Invalid input. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
    */
//--------------------------------------------------Program # 03-------------------------------------------------------------//
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height;

    cout << "Select a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    switch (choice) {
        case 1: // Circle
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius > 0) {
                cout << "Area of the circle: " << M_PI * pow(radius, 2) << endl;
            } else {
                cout << "Error: Radius must be a positive number." << endl;
            }
            break;

        case 2: // Rectangle
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length > 0 && width > 0) {
                cout << "Area of the rectangle: " << length * width << endl;
            } else {
                cout << "Error: Length and width must be positive numbers." << endl;
            }
            break;

        case 3: // Triangle
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base > 0 && height > 0) {
                cout << "Area of the triangle: " << 0.5 * base * height << endl;
            } else {
                cout << "Error: Base and height must be positive numbers." << endl;
            }
            break;

        default: // Invalid choice
            cout << "Error: Invalid choice. Please select a number between 1 and 3." << endl;
            break;
    }

    return 0;
}
*/
//---------------------------------------------------------Program 04----------------------------------------------------------//
/*
#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, convertedAmount;

    // Display the menu for currency conversion
    cout << "Currency Converter" << endl;
    cout << "1. USD to PKR" << endl;
    cout << "2. USD to INR" << endl;
    cout << "3. USD to Euros" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Prompt the user to enter the amount in USD
    cout << "Enter the amount in USD: ";
    cin >> amount;

    // Use a switch statement to handle the selected conversion
    switch (choice) {
        case 1: // USD to PKR
            convertedAmount = amount * 277.50; // Exchange rate as of October 2023
            cout << amount << " USD = " << convertedAmount << " PKR" << endl;
            break;

        case 2: // USD to INR
            convertedAmount = amount * 83.00; // Exchange rate as of October 2023
            cout << amount << " USD = " << convertedAmount << " INR" << endl;
            break;

        case 3: // USD to Euros
            convertedAmount = amount * 0.95; // Exchange rate as of October 2023
            cout << amount << " USD = " << convertedAmount << " Euros" << endl;
            break;

        default: 
            cout << "Error: Invalid choice. Please select a number between 1 and 3." << endl;
            break;
    }

    return 0;
}
*/
//-----------------------------------------------------------Program 05------------------------------------------------------------//
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int categoryChoice, itemChoice, quantity;
    double totalPrice = 0.0;
    double discount = 0.0;
    double finalPrice = 0.0;

    
    cout << "Welcome to the Shopping System!" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Groceries" << endl;
    cout << "Enter your category choice (1-3): ";
    cin >> categoryChoice;

    // Di
    switch (categoryChoice) {
        case 1:
            cout << "\nElectronics:" << endl;
            cout << "1. Laptop - $1000" << endl;
            cout << "2. Smartphone - $700" << endl;
            cout << "3. Headphones - $150" << endl;
            cout << "Enter your item choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1:
                    totalPrice = 1000.0;
                    break;
                case 2:
                    totalPrice = 700.0;
                    break;
                case 3:
                    totalPrice = 150.0;
                    break;
                default:
                    cout << "Invalid item choice." << endl;
                    return 1;
            }
            break;

        case 2: 
            cout << "\nClothing:" << endl;
            cout << "1. Jacket - $120" << endl;
            cout << "2. T-shirt - $40" << endl;
            cout << "3. Jeans - $60" << endl;
            cout << "Enter your item choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1:
                    totalPrice = 120.0;
                    break;
                case 2:
                    totalPrice = 40.0;
                    break;
                case 3:
                    totalPrice = 60.0;
                    break;
                default:
                    cout << "Invalid item choice." << endl;
                    return 1;
            }
            break;

        case 3: 
            cout << "\nGroceries:" << endl;
            cout << "1. Milk (1 Liter) - $2" << endl;
            cout << "2. Bread (1 Loaf) - $3" << endl;
            cout << "3. Eggs (1 Dozen) - $5" << endl;
            cout << "Enter your item choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1:
                    totalPrice = 2.0;
                    break;
                case 2:
                    totalPrice = 3.0;
                    break;
                case 3:
                    totalPrice = 5.0;
                    break;
                default:
                    cout << "Invalid item choice." << endl;
                    return 1;
            }
            break;

        default:
            cout << "Invalid category choice." << endl;
            return 1;
    }


    cout << "Enter the quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number." << endl;
        return 1;
    }

  
    totalPrice *= quantity;

 
    if (totalPrice > 500) {
        discount = totalPrice * 0.20;
    } else if (totalPrice >= 100) {
        discount = totalPrice * 0.10;
    }

  
    finalPrice = totalPrice - discount;

    
    cout << "\nInvoice:" << endl;
    cout << "Total Price: $" << fixed << setprecision(2) << totalPrice << endl;
    cout << "Discount: $" << fixed << setprecision(2) << discount << endl;
    cout << "Final Price: $" << fixed << setprecision(2) << finalPrice << endl;

    return 0;
}
*/
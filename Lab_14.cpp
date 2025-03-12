//--------------------------------------------------Program 01----------------------------------------------------------//
/*#include<iostream>
#include<string>
using namespace std;

struct student{
	string first_name;
	string last_name;
	int roll_no;
	int marks;
	void studentinfo(student s1){ 
	cout<<"Full Name: "<<s1.first_name <<""<< s1.last_name<<endl;
	cout<<"Marks: "<<s1.marks<<endl;
	}
}s1,s2;
int main(){
	student s1;
	s1.first_name="Ubaidullah";
	s1.last_name="Awan";
	s1.marks=100;
	s1.studentinfo(s1);

	return 0;
}
*/
//-----------------------------------------------------Program 02----------------------------------------------------------//
#include<iostream>
#include<string>
using namespace std;

struct student {
    string first_name;
    string last_name;
    int roll_no;
    int marks;

    // Corrected the studentinfo function to work with the current object
    void studentinfo() {
        cout << "Full Name: " << first_name << " " << last_name << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int numstudents;
    cout << "Enter the number of students: ";
    cin >> numstudents;

    
    student students[numstudents];  

    for(int i = 0; i < numstudents; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        cout << "First Name: ";
        cin >> students[i].first_name;

        cout << "Last Name: ";
        cin >> students[i].last_name;

        cout << "Roll no: ";
        cin >> students[i].roll_no;

        cout << "Marks: ";
        cin >> students[i].marks;
    }

    
    cout << "Student information:" << endl;
    for(int i = 0; i < numstudents; i++) {
        students[i].studentinfo();  
    }

    return 0;
}
//---------------------------------------------------------------------------Program 03-----------------------------------------------------------------------------------------//

#include <iostream>
#include <string>
using namespace std;


struct Student {

    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
  
    Student* studentPtr = new Student;

    
    cout << "Enter student details:" << endl;

    cout << "First Name: ";
    cin >> studentPtr->firstName;

    cout << "Last Name: ";
    cin >> studentPtr->lastName;

    cout << "Roll Number: ";
    cin >> studentPtr->rollNumber;

    cout << "Marks: ";
    cin >> studentPtr->marks;

   
    cout << "\nStudent Information:" << endl;
    studentPtr->displayStudentInfo();

  
    delete studentPtr;

    return 0;
}
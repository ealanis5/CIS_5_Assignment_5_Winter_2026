#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// This is global variable, do not modify
#define MAX_STUDENTS 5

struct Student {
	int studentId;
	string studentName;
	float studentGrades;
};

/*!
* Function Prototypes
*/
void printMenu();
void highestGrade(Student students[], int count);
void lowestGrade(Student students[], int count);
void averageGrade(Student students[], int count);
void printStudentId(Student students[], int count);
void printStudentName(Student students[], int count);

int main() {
	Student students[MAX_STUDENTS];
	int count = 0;  // this keeps track of the students that are in the class
	int choice;     // user input

	/*!
	* Add the students here!
	*/
	//----------------------------------------------------------------------------------------

    students[0] = { 1010923, "Alice", 85.5 };
	students[1] = { 1028908, "Bob", 92.0 };
	students[2] = { 1031291, "Charlie", 78.0 };
	students[3] = { 1042342, "Diana", 92.8 };
	students[4] = { 1056780, "Ethan", 68.5 };
	count = 5; 







	//----------------------------------------------------------------------------------------

	// Complete the menu with the associated function
	do {
		printMenu();
		cout << "Enter your choice: ";
		cin >> choice;
		cin.ignore();  // we add this to consume the leftover newline

		switch (choice) {
		case 1:
			highestGrade(students, count);
			break;
		case 2:
			lowestGrade(students, count);
			break;
		case 3:
			averageGrade(students, count);
			break;
		case 4:
			printStudentId(students, count);
			break;
		case 5:
			printStudentName(students, count);
			break;
		case 6:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 6);

	return 0;
}

void printMenu() {
	cout << "\n=== Student Record System ===\n";
	cout << "1. Find student with the highest grade\n";
	cout << "2. Find the student with the lowest grade\n";
	cout << "3. Find the average grade in the class\n";
	cout << "4. Print all the student's ID\n";
	cout << "5. Print all the student's names\n";
	cout << "6. Exit\n";
}

/* TODO: Implement these functions */

// Remeber, if you pass an array into a function, it is a pass by reference!
// Because arrays decay to pointers, so you are getting a pointer to the first element
// which allows you to modify the data. 

void highestGrade(Student students[], int count)
{
	// TODO: Print out all the highest grade in the array
	int aryIndex = 0;
	float highest = students[0].studentGrades;
	for (int i = 1; i < count; i++) {
		if (students[i].studentGrades > highest) {
			highest = students[i].studentGrades;
			aryIndex = i;
		}
	}
	cout << "Highest Grade: " << highest << " by " << students[aryIndex].studentName << endl;

	// Here is a simple check to ensure your code does not break
	if (count == 0) {
		cout << "No students in the record.\n";
		return;
	}
}
void lowestGrade(Student students[], int count)
{
	// TODO: Print out all the lowest grade in the array
	int aryIndex = 0;
	float lowest = students[0].studentGrades;
	for (int i = 1; i < count; i++) {
		if (students[i].studentGrades < lowest) {
			lowest = students[i].studentGrades;
			aryIndex = i;
		}
	}
	cout << "Lowest Grade: " << lowest << " by " << students[aryIndex].studentName << endl;

	// Here is a simple check to ensure your code does not break
	if (count == 0) {
		cout << "No students in the record.\n";
		return;
	}
}
void averageGrade(Student students[], int count)
{
	// TODO: Print out the average grade of the students
	float sum = 0.0;
	for (int i = 0; i < count; i++) {
		sum += students[i].studentGrades;
	}
	float average = (count > 0) ? (sum / count) : 0;
	cout << "Average Grade: " << average << endl;

	// Here is a simple check to ensure your code does not break
	if (count == 0) {
		cout << "No students in the record.\n";
		return;
	}
}
void printStudentId(Student students[], int count)
{
	// TODO: Print out all the students id in the array
	cout << "Student IDs:\n";
	for (int i = 0; i < count; i++) {
		cout << students[i].studentId << endl;
	}

	// Here is a simple check to ensure your code does not break
	if (count == 0) {
		cout << "No students in the record.\n";
		return;	
}
}
void printStudentName(Student students[], int count)
{
	// TODO: Print out all the students name in the array
	cout << "Student Names:\n";
	for (int i = 0; i < count; i++) {
		cout << students[i].studentName << endl;
}
	
	// Here is a simple check to ensure your code does not break
	if (count == 0) {
		cout << "No students in the record.\n";
		return;
	}
}
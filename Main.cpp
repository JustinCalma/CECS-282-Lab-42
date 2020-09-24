#include "PersonProblem2.h"
#include <iostream>
using namespace std;

// Print the array
void printArray(PersonProblem2** person, int numElements) {

	for (int i = 0; i < numElements; i++) {

		cout << (person[i]->getName()) << " " << (person[i]->getSalary()) << endl;

	}
}

// Main Function
int main() {

	// Get the size of the array
	int numElements;
	cout << "Enter the number of people in the array: ";
	cin >> numElements;

	// Create the array pointer
	PersonProblem2* person[numElements];

	// For every element, create a person
	for (int i = 0; i < numElements; i++) {

		person[i] = new PersonProblem2;
		person[i]->setPerson();

	}

	cout << "Array before being sorted: " << endl;
	printArray(person, numElements);
	cout << endl;

	cout << "Sorting array by NAME in ascending order: " << endl;
	bsort(person, numElements, true);
	printArray(person, numElements);
	cout << endl;

	cout << "Sorting array by SALARY in ascending order: " << endl;
	bsort(person, numElements, false);
	printArray(person, numElements);
	cout << endl;

	return 0;

}

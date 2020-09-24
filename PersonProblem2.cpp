#include "PersonProblem2.h"
#include <iostream>
#include <string>
using namespace std;

// BubbleSort Function
void bsort(PersonProblem2** person, int numElements, bool SalaryOrName) {

	for (int i = 0; i < numElements; i++) {
		for (int j = i + 1; j < numElements; j++) {

			PersonProblem2* temp;

			if ((SalaryOrName == false && person[i]->getSalary() > person[j]->getSalary())
				|| (SalaryOrName == true && person[i]->getName() > person[j]->getName())) {

				temp = person[i];
				person[i] = person[j];
				person[j] = temp;

			}
		}
	}
}

// Set the name and salary for each person
void PersonProblem2::setPerson() {

	cout << "Enter the name of the person: ";
	cin >> this->name;

	cout << "Enter the salary of the person: ";
	cin >> this->salary;

}

// Get the name of the person
string PersonProblem2::getName() {
	return this->name;
}

// Get the salary of the person
float PersonProblem2::getSalary() {
	return this->salary;
}

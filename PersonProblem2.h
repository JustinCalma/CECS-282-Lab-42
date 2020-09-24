#include <iostream>
#include <string>
using namespace std;
#ifndef PERSONPROBLEM2_H
#define PERSONPROBLEM2_H

// Create a class PersonProblem2
class PersonProblem2 {

	// Private attributes
	private:
		string name;
		float salary;

	// Public functions
	public:
		void setPerson();
		string getName();
		float getSalary();

};

// Declare the non-member functions 
void bsort(PersonProblem2** person, int numElements, bool SalaryOrName);

#endif

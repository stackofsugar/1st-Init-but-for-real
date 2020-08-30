#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

int choice;
void printDetails(std::string printChoice);

Class Alienator; Class Csw32; Class PC; 

int main() {



	Alienator.setTitle("Alienator");
	Alienator.setAuthor("Michael Krisnandhi");
	Alienator.setPublisher("Michaelsoft Wandows");
	Alienator.setIdname(4512778);

	Csw32.setTitle("Cinta Sejati in x86");
	Csw32.setAuthor("Michael Krisnandhi");
	Csw32.setPublisher("Michaelsoft Wandows");
	Csw32.setIdname(25144568);

	PC.setTitle("Prime Checker");
	PC.setAuthor("Christopher Digno");
	PC.setPublisher("Chris.inc");
	PC.setIdname(872235);

	cout << "Project Explorer\nby Christopher Digno\n\nPlease select commands below:" << endl;
	cout << "1. Print Alienator roject\n2. Print Cinta Sejati project\n3. Print PrimeChecker project" << endl;
	cout << "Your choice: ";
	cin >> choice;

	if (choice == 1) {
		printDetails("Alienator");
	}
	else if (choice == 2) {
		printDetails("Csw32");
	}
	else if (choice == 3) {
		printDetails("PrimeChecker");
	}
	else {
		cerr << "Unknown expression entered.\n";
	}

	return 0;
}

// initializing method to print class members
void printDetails(std::string printChoice) {
	if (printChoice == "Alienator") { // will print Alienator
		cout << "\nTitle: " << Alienator.getTitle() << "\nAuthor: " << Alienator.getAuthor() << "\nPublisher: " << Alienator.getPublisher() << "\nID Name: " << Alienator.getIdname() << endl;
	}
	else if (printChoice == "Csw32") { // will print Csw32
		cout << "\nTitle: " << Csw32.getTitle() << "\nAuthor: " << Csw32.getAuthor() << "\nPublisher: " << Csw32.getPublisher() << "\nID Name: " << Csw32.getIdname() << endl;
	}
	else if (printChoice == "PrimeChecker") { // will print PrimeChecker
		cout << "\nTitle: " << PC.getTitle() << "\nAuthor: " << PC.getAuthor() << "\nPublisher: " << PC.getPublisher() << "\nID Name: " << PC.getIdname() << endl;
	}
}
#include <iostream>
#include "Class.h"
using namespace std;

int choice;

int main() {
	Class Alienator; Class Csw32; Class PC; 

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
	PC.setPublisher("Michaelsoft Wandows");
	PC.setIdname(4512778);

	cout << "Project Explorer\nby Christopher Digno\n\nPlease select commands below:" << endl;
	cout << "1. Print Alienator project\n2. Print Cinta Sejati project\n3. Print PrimeChecker project" << endl;
	cout << "Your choice: ";
	cin >> choice;

	if (choice == 1) {
		cout << "\nTitle: " << Alienator.getTitle() << "\nAuthor: " << Alienator.getAuthor() << "\nPublisher: " << Alienator.getPublisher() << "\nID Name: " << Alienator.getIdname() << endl;
	}
	else if (choice == 2) {
		cout << "\nTitle: " << Csw32.getTitle() << "\nAuthor: " << Csw32.getAuthor() << "\nPublisher: " << Csw32.getPublisher() << "\nID Name: " << Csw32.getIdname() << endl;
	}
	else if (choice == 3) {
		cout << "\nTitle: " << PC.getTitle() << "\nAuthor: " << PC.getAuthor() << "\nPublisher: " << PC.getPublisher() << "\nID Name: " << PC.getIdname() << endl;
	}
	else {
		cerr << "Unknown expression entered.\n";
	}

	return 0;
}

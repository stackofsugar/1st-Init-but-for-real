#include <iostream>
#include "Class.h"
using namespace std;

// initialize class function
void Class::setTitle(std::string tit) {
	title = tit;
}
void Class::setAuthor(std::string aut) {
	author = aut;
}
void Class::setPublisher(std::string pub) {
	publisher = pub;
}
void Class::setIdname(unsigned int id) {
	idname = id;
}

// initialize other class functions
std::string Class::getTitle() {
	return title;
}
std::string Class::getAuthor() {
	return author;
}
std::string Class::getPublisher() {
	return publisher;
}
int Class::getIdname() {
	return idname;
}

void Class::newPrint() {
	std::cout << "\nTitle: " << getTitle() << "\nAuthor: " << getAuthor() << "\nPublisher: " << getPublisher() << "\nID name: " << getIdname() << endl;
}
#ifndef CLASS_H
#define CLASS_H
#include <string>

class Class
{
private:
	std::string title;
	std::string author;
	std::string publisher;
	int idname;
public:
		// establish a function to modify encapsulated variables
		void setTitle(std::string tit);
		void setAuthor(std::string aut);
		void setPublisher(std::string pub);
		void setIdname(unsigned int id);
		// establish a function to display encapsulated variables
		std::string getTitle();
		std::string getAuthor();
		std::string getPublisher();
		int getIdname();
		// establish a method to display class members
		void newPrint();
};

#endif //CLASS_H
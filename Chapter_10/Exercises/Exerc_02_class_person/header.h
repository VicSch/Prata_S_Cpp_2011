#ifndef HEADER_H
#define HEADER_H
#include <string>

class Person {

private:
	static const int LIMIT = 25;
	std::string lname;			// surename
	char fname[LIMIT];			// name

public:
	Person() { lname = ""; fname[0] = '\0';}
	Person(const std::string &lname_, const char *fname_ = "Heyyou");
	~Person();
	void show() const;			// format: neme, surename
	void formalShow() const;	// format: surename, name

};

#endif // HEADER_H

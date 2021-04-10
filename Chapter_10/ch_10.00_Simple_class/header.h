#ifndef HEADER_H
#define HEADER_H
#include <string>

// class declaration
class Simple {

private:
	std::string name;
	int age;
	int experience;					// experience of work
	int shifts;						// work shifts on mouth
	double salary;					// salary per month
	double hourly;					// dollars per hour
	

public:
	Simple();						// class constructor
	Simple(const std::string name_, int age_= 16, int experience_= 0);
	~Simple();						// class destructor
	
	void real_hourly(double hour = 10);
	void setName(std::string n);
	void setAge(int a);
	void setExper(int exp);
	void setShifts(int shs = 0);
	void mon_salary(int shs = 0);	// count month's salary
	void print() const;				// print data of class in console

};

#endif // HEADER_H

#ifndef HEADER_H
#define HEADER_H
#include <string>

class BankAcc {

private:
	void update(double s);

public:
	std::string name;
	std::string accaunt;
	double balance;
	// double sum;

	// constructors
	BankAcc();
	BankAcc(std::string name_, std::string accaunt_= "00000000", double balance_= 0.0);

	// dectructor
	~BankAcc();

	void show() const;
	void add(double s);
	void take(double s);
	void setName(std::string n);
	void setAccount(std::string acc);

};

#endif // HEADER_H

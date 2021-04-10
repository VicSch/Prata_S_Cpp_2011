#ifndef HEADER_H
#define HEADER_H

static const int SIZE = 19;

class Plorg {

private:
	char name[SIZE];
	int ci;

public:
	Plorg();
	Plorg(char name_[], int ci_= 50);
	~Plorg();

	void setName(char *n);
	void setCi(int c);
	void show() const;
};


#endif // HEADER_H

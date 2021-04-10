#ifndef GOLF_H
#define GOLF_H

class Golf {

private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

	// copy object in argument to current object
	void set(Golf &g);

public:
	// constructor
	Golf();
	Golf(const char *fullname_, int handicap_);

	// destructor
	~Golf();

	// set golf, return 1 if name is entred, else 0
	int setGolfer();

	// set handicap
	void setHandicap(int hc);

	// get fullname value
	const char *getName() const;

	// show golf structure
	void show() const;
};

#endif // GOLF_H

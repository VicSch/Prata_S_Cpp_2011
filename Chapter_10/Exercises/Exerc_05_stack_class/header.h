#ifndef HEADER_H
#define HEADER_H

static const int SIZE = 3;

struct customer {

	char fullname[35];
	double payment;
};

class Stack {

private:
	customer custArr[SIZE];
	int top;
	double top_sum;
	char *top_name;
	void updateTop();
	void show() const;

public:
	Stack();
	// Stack(customer custArr_[SIZE]);
	~Stack();

	void add(customer c);
	void pop();	

};

#endif // HEADER_H

#ifndef LIST_H
#define LIST_H

static const int SIZE = 5;

class List
{

private:
    int top;
    double lst[SIZE];

public:
    List();
    ~List();

    void showList() const;
    void add(double i);
    void visit(void (*pf)(double&));
    void pop();
    int isEmpty() const;
    int isFull() const;
};

// function add 10 to item of list
void addTen(double& i);

#endif // LIST_H

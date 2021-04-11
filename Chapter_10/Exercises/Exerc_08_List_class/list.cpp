#include "list.h"
#include <iostream>

int top;
double lst[SIZE];

List::List()
{
    top = 0;

    for(int i = 0; i < SIZE; ++i)
        lst[i] = 0.0;
}

List::~List()
{
}

void List::showList() const
{

    for(int i = 0; i < top; ++i) {
        std::cout << "Item #" << i << ": ";
        std::cout << lst[i] << std::endl;
    }
    std::cout << "=============\n\n";
}

void List::add(double i)
{

    if(isFull())
        std::cout << "List is full.\n\n";
    else
        lst[top++] = i;
}

void List::visit(void (*pf)(double&))
{

    for(int i = 0; i < top; ++i)
        (*pf)(lst[i]);
}

void List::pop()
{

    if(isEmpty())
        std::cout << "List is empty.\n\n";
    else
        top--;
}

int List::isEmpty() const
{
    return (int)(top == 0);
}

int List::isFull() const
{
    return (int)(top == SIZE);
}

// function add 10 to item of list
void addTen(double& i)
{
    i += 10.0;
}
#include <iostream>
#include "header.h"

namespace SALES {

	Sales::Sales() {
		
		for (int i = 0; i < QUARTERS; ++i)
			sales[i] = 0.0;
		
		average = 0;
		maxs = 0;
		mins = 0;
		// num = QUARTERS;
	}
	Sales::Sales(double sales_[], int num_) {
		double min, max;
		min = max = sales_[0];
		double sum = 0;
		int c = 0;

		// find min, max, averege from sales_[]
		for(int i = 0; i < num_; ++i) {
			if(sales_[i] < min) {
				min = sales_[i];
				c = i;
			}
			if(sales_[i] > max)
				max = sales_[i];
			sum += sales_[i];
		}
		// fill 'sales' of struct Sales
		for (int i = 0; i < num_; ++i) {
			if(i == c)
				sales[i] = min;
			else
				sales[i] = 0;
		}
		mins = min;
		maxs = max;
		average = sum / num_;
	}
	Sales::~Sales() {};

	void Sales::setSales() {
		
		const int MONTHS = 12;
		const char* months[MONTHS] = {
								"January",
								"February",
								"March",
								"April",
								"May",
								"June",
								"Jule",
								"August",
								"September",
								"October",
								"November",
								"December"};
		double sal;

		for (int i = 0; i < QUARTERS; ++i)
			sales[i] = 0;

		// fill s.sales[]
		for (int i = 0; i < MONTHS; ++i) {
			std::cout << "Enter sales in " << *(months+i) << ": ";
			std::cin >> sal;
			int q = i / 3;
			sales[q] += sal;
		}

		double min, max;
		min = max = sales[0];
		double sum = 0;

		// find min, max, averege from s.sales[]
		for (int i = 0; i < QUARTERS; ++i) {
			if(sales[i] < min)
				min = sales[i];
			
			if(sales[i] > max)
				max = sales[i];
			sum += sales[i];
		}

		mins = min;
		maxs = max;
		average = sum / QUARTERS;
	}

	void Sales::showSales() const {

		std::cout << "Sales report:\n";
		std::cout << "Q I: " << sales[0] << "; ";
		std::cout << "Q II: " <<sales[1] << "; ";
		std::cout << "Q III: " << sales[2] << "; ";
		std::cout << "Q IV: " << sales[3] << "; \n";

		std::cout << "Average: " << average << ": \n";
		std::cout << "Maximum: " << maxs << ": \n";
		std::cout << "Minimum: " << mins << ": \n";
	}
}

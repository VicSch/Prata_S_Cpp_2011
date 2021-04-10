#include <iostream>
#include "header.h"

namespace SALES {

	void setSales(Sales &s, const double ar[], int n) {
		
		double min, max;
		min = max = ar[0];
		double sum = 0;
		int c = 0;

		// find min, max, averege from ar[]
		for(int i = 0; i < n; ++i) {
			if(ar[i] < min) {
				min = ar[i];
				c = i;
			}
			if(ar[i] > max)
				max = ar[i];
			sum += ar[i];
		}
		// fill 'sales' of struct Sales
		for (int i = 0; i < n; ++i) {
			if(i == c)
				s.sales[i] = min;
			else
				s.sales[i] = 0;
		}
		s.min = min;
		s.max = max;
		s.average = sum / n;
	}

	void setSales(Sales &s) {
		
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
			s.sales[i] = 0;

		// fill s.sales[]
		for (int i = 0; i < MONTHS; ++i) {
			std::cout << "Enter sales in " << *(months+i) << ": ";
			std::cin >> sal;
			int q = i / 3;
			s.sales[q] += sal;
		}

		double min, max;
		min = max = s.sales[0];
		double sum = 0;

		// find min, max, averege from s.sales[]
		for (int i = 0; i < QUARTERS; ++i) {
			if(s.sales[i] < min)
				min = s.sales[i];
			
			if(s.sales[i] > max)
				max = s.sales[i];
			sum += s.sales[i];
		}

		s.min = min;
		s.max = max;
		s.average = sum / QUARTERS;
	}

	void showSales(const Sales &s) {

		std::cout << "Sales report:\n";
		std::cout << "Q I: " << s.sales[0] << "; ";
		std::cout << "Q II: " << s.sales[1] << "; ";
		std::cout << "Q III: " << s.sales[2] << "; ";
		std::cout << "Q IV: " << s.sales[3] << "; \n";

		std::cout << "Average: " << s.average << ": \n";
		std::cout << "Maximum: " << s.max << ": \n";
		std::cout << "Minimum: " << s.min << ": \n";
	}
}

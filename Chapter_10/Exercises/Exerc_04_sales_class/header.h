#ifndef HEADER_H
#define HEADER_H

namespace SALES {
	static const int QUARTERS = 4;
	class Sales {

	private:
		double sales[QUARTERS];
		double average;
		double maxs;
		double mins;
		// int num;

	public:
		Sales(double sales_[], int num_ = QUARTERS);
		Sales();
		~Sales();
		void setSales();
		void showSales() const;
	};
}

#endif // HEADER_H

#include <iostream>

using namespace std;

class Sales_data {
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
public:

};

int main()
{
	Sales_data total;

	if (cin >> total.bookNo >> total.units_sold >> total.revenue) { 
		total.revenue *= total.units_sold;

		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			trans.revenue *= trans.units_sold;

			if (total.bookNo == trans.bookNo) {
				total.revenue += trans.revenue;
				total.units_sold += trans.units_sold;
			} else {
				cout << total.bookNo << " " << total.units_sold
				     << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold
			<< " " << total.revenue << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}

	return 0;
}

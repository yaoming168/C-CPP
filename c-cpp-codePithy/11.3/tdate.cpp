#include <iostream>
#include "date.h"

using namespace std;

int main()
{
	Date d1, d2(1951,10,1);
	cout << "d1 == : " << d1.day() << endl;
	cout << "d2 == : "  << d2.day() << endl;
	cout << "d1.compare(d2): " << d1.compare(d2) << endl;
	cout << "d2.compare(d1): " << d2.compare(d1) << endl;

	return 0;
}
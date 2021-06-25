/*
 *
 * */
#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main()
{
//	create an array of initialized objects
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Momolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}
//	set points to first element
	const Stock* top = &stocks[0];
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
//	now top points to the most valuable holding
	std::cout << "\nMost valuable holding:\n";
	top->show();
	return 0;
}

/*
 * Stock holdings:
Company: NanoSmart Shares: 12
 Share Price: $20.000 Total Wotfh: $240.000
Company: Boffo Objects Shares: 200
 Share Price: $2.000 Total Wotfh: $400.000
Company: Momolithic Obelisks Shares: 130
 Share Price: $3.250 Total Wotfh: $422.500
Company: Fleep Enterprises Shares: 60
 Share Price: $6.500 Total Wotfh: $390.000

Most valuable holding:
Company: Momolithic Obelisks Shares: 130
 Share Price: $3.250 Total Wotfh: $422.500
 *
 * */
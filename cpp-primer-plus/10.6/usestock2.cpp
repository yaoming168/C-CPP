/*
 *using the Stock calss compile with stock10.cpp
 *
 * */

#include <iostream>
#include "stock10.h"

int main()
{
	/*
	 *main()的开头和末尾多了一个大括号。
	 * 诸如stock1和stock2等自动变量将在程序退出其定义所属代码块时消失。
	 * 如果没有这些大括号，代码块将为整个main()，因此仅当main()执行完毕后，
	 * 才会调用析构函数。在窗口环境中，这意味着将在两个析构函数调用前关闭，
	 * 导致您无法看到最后两条消息。但添加这些大括号后，最后两个析构函数调用将在到达返回语句前执行，
	 * 从而显示相应的消息。
	 *
	 * */
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Using a constructor to reset an object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	return 0;
}
/*
Using constructors to create new objects
Constructor using NanoSmart called
Company: NanoSmart Shares: 12
 Share price: $20.000 Total Worth: $240.00
Constructor using Boffo Objects called
Company: Boffo Objects Shares: 2
 Share price: $2.000 Total Worth: $4.00
Assigning stock1 to stock2:
Listing stock1 and stock2:
Company: NanoSmart Shares: 12
 Share price: $20.000 Total Worth: $240.00
Company: NanoSmart Shares: 12
 Share price: $20.000 Total Worth: $240.00
Using a constructor to reset an object
Constructor using Nifty Foods called
Bye, Nifty Foods!
Revised stock1:
Company: Nifty Foods Shares: 10
 Share price: $50.000 Total Worth: $500.00
Done
Bye, NanoSmart!
Bye, Nifty Foods!
 * */
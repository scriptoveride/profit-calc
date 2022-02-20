#include <iostream>

using namespace std;

float buy_price, sell_price, profit, percent_gain, amount;
int test;

int main() {

	cout << "price when purchased ";
	cin >> buy_price;
	cout << "price when sold ";
	cin >> sell_price;
	cout << "amount purchased ";
	cin >> amount;

	profit = amount * sell_price - amount * buy_price;

	percent_gain = profit / buy_price * 100;

	cout << "You made $" << profit << "	(" << percent_gain << "%)";


	getchar();
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int price, quantity, total, tax, grandtotal;
	cout << "enter price";
	cin >> price;
	cout << "enter quantity";
	cin >> quantity;
	total = price * quantity;
	tax = total * 5 / 100;
	grandtotal = total + tax;
	cout << "total:" << total << endl;
	cout << "tax:" << tax << endl;
	cout << "grandtotal:" << grandtotal << endl;
	return 0;
}
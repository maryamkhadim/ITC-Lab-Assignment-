#include<iostream>
using namespace std;
int main()
{
	int age, credithours, feepercredithour;
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter credithours :";
	cin >> credithours;
	cout << "Enter fee per credithour:";
	cin >> feepercredithour;
	int Totalfee = credithours * feepercredithour;
	int Discountfee = Totalfee - 2000;
	cout << "Total Fee:" << Totalfee << endl;
	cout << "Fee after discount:" << Discountfee << endl;
	cout << "Year of birth:" << 2026 - age << endl;
	cout << "Year you will turn 25:" << 2026 + (25 - age) << endl;
	return 0;



}
// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "math.h" 
#include <iostream>
using namespace std;


int main() {
	float F, a, x, c;
	cout << "Enter c: " << endl;
	cin >> c;
	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter x: " << endl;
	cin >> x;
	cout << "F = ";
	if (c < 5) {
		if (a != 0) {
			cout << (pow(5 * a, 5) + sqrt(x)) << endl;
		}
	}
	if (c > 0) {
		cout << (1 + c) / (pow(c, 2) - x) << endl;
	}
	else if (a == 0) {
		cout << (1 + c) / (pow(c, 2) - x) << endl;
	}
	else if (c != 0) {
		cout << fabs(x - 7) / 3 * c << endl;
	}
	else cout << "Error" << endl;


	system("pause");
	return 0;
}

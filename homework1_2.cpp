#include <iostream>
#include <cmath>

int main() {
	double a;
	double b;
	double c;
	std::cout << "Enter coefficients ax^2+bx+c=0 \n";
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;
	double x1;
	double x2;
	if ((a == 0) && (b == 0) && (c == 0)) {
		std::cout << "All x is solution" << '\n';
	}
	if ((a == 0) && (b == 0) && (c!=0)) {
		std::cout << "No x in R \n";
	}
	if ((a == 0) && (c == 0)&& (b!=0)) {
		std::cout << "x = 0 \n";
	}
	if ((b == 0) && (c == 0) && (a!=0)) {
		std::cout << "x = 0 \n";
	}
	if ((a == 0)&&(b!=0)&&(c!=0)) {
		x1 = -c / b;
		std::cout << "x = " << x1 << '\n';
	}
	if ((b == 0) && (a != 0) && (c != 0)) {
		if (-c / a >= 0) {
			x1 = -sqrt(-c / a);
			x2 = sqrt(-c / a);
			std::cout << "x_1 = " << x1 << " x_2 = " << x2 << '\n';
		}
		else {
			std::cout << "No x in R" << '\n';
		}
	}
	if ((c == 0) && (a != 0) && (b != 0)) {
		x1 = 0;
		x2 = -b / c;
		std::cout << "x_1 = " << x1 << "x_2 = " << x2 << '\n';
	}
	if ((a != 0) && (b != 0) && (c != 0)) {
		double d;
		d = b * b - 4 * a * c;
		if (d < 0) {
			std::cout << "No x in R" << '\n';
		}
		if (d == 0) {
			x1 = -b / (2 * a);
			std::cout << "x = " << x1 << '\n';
		}
		if (d > 0) {
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			std::cout << "x_1 = " << x1 << " x_2 = " << x2 << '\n';
		}
	}
	
}


#include <iostream>
#include <cmath>

int main() {
	std::cout << "x = ";
	double x;
	std::cin >> x;
	std::cout << "y = ";
	double y;
	std::cin >> y;
	std::cout << "R = ";
	double R;
	std::cin >> R;
	std::cout << "r = ";
	double r;
	std::cin >> r;
	if ((r * r < x * x + y * y) && (R * R > x * x + y * y)) {
		std::cout << "point in area\n";
	}
	else {
		std::cout << "point away from area\n";
	}
}

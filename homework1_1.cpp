#include <iostream>

int main() {
	std::cout << "A=[a,b]" << std::endl;
	std::cout << "a = ";
	double a;
	std::cin >> a;
	std::cout << "b = ";
	double b;
	std::cin >> b;
	std::cout << "B = [c,d]" << std::endl;
	std::cout << "c = ";
	double c;
	std::cin >> c;
	std::cout << "d = ";
	double d;
	std::cin >> d;
	std::cout << "x = ";
	double x;
	std::cin >> x;
	double y;
	y = ((d - c) / (b - a)) * (x - a) + c;
	std::cout << "y = " << y << '\n';
}

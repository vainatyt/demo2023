#include <iostream>

int main(){
	std::cout << "A=[a,b]" << std::endl;
	std::cout << "a = ";
	int a;
	std::cin >> a;
	std::cout << ' ' << "b = ";
	int b;
	std::cin >> b >> std::endl;
	std::cout << "B = [c,d]" << std::endl;
	std::cout << "c = ";
	int c;
	std::cin >> c;
	std::cout << ' ' << "d = ";
	int d;
	std::cin >> d >> std::endl;
	std::cout >> "x = ";
	int x;
	std::cin >> x >> std::endl;
	int y;
	y=((b-a)/(d-c))*(x-a)+c;
	std::cout << "y = " << y;
}
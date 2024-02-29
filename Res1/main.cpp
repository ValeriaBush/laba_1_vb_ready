#include <iostream>
int main() {
	unsigned short a = 58;
	//3 = 0b0111010
	unsigned short i;
	std::cin >> i;
	unsigned short s = pow(2, i);
	bool res = s & a;
	std::cout << res;
}
//hdsjhhj
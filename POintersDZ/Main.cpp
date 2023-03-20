#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "Ru");
	int x, y;
	std::cout << " ¬ведите 1-е число -> ";
	std::cin >> x;
	std::cout << " ¬ведите 2-е число -> ";
	std::cin >> y;
	int* px = &x; int* py = &y;
	std::cout << " —реднеее арифмитическое 2 переменных = " << double(*px + *py) / 2
		<< std::endl;

	


	return 0;
}
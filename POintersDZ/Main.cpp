#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "Ru");
	int x, y;
	std::cout << " ������� 1-� ����� -> ";
	std::cin >> x;
	std::cout << " ������� 2-� ����� -> ";
	std::cin >> y;
	int* px = &x; int* py = &y;
	std::cout << " �������� �������������� 2 ���������� = " << double(*px + *py) / 2
		<< std::endl;

	


	return 0;
}
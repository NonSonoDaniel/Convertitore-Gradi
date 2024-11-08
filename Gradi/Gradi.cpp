#include <iostream>

int main()
{
	float temperatura, gradiF;

	std::cout << "Inserire la temperatura in gradi celsius: ";
	std::cin >> temperatura;

	gradiF = ((temperatura * 9/5) + 32);

	std::cout << "La temperatura in gradi fahrenheit e' di: " << gradiF << " F";
}
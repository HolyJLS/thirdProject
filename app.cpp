#include <iostream>

int main() {
	// vars

	double Pesos;

	double Reais;

	double Soles;

	double Dollars;

	// user inputs

	std::cout << "Enter Number of Pesos:";
		std::cin >> Pesos;

		std::cout << "Enter Number of Reais:";
			std::cin >> Reais;

			std::cout << "Enter Number of Soles:";
				std::cin >> Soles;

		// 0.042
		// 0.19
		// 0.29

	Dollars = 0.042 * Pesos + 0.19 * Reais + 0.29 * Soles;

	std::cout << "US Dollars = $" << Dollars << "\n";
}

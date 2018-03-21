#include <iostream>
#include "milhao.hpp"

/**
* @file milhao.cpp
* @brief  A função Milhao retorna o número de anos necessários para se atingir 1 Milhão, dada uma *quantidade fixa mensal
*/
void milhao() {
	int salario, despesas;
	std::cout << "Digite seu salário: " << std::endl;
    std::cin >> salario;
	std::cout << "Digite seus gastos: " << std::endl;
    std::cin >> despesas;
	using namespace std;
	int anos;
	anos = 1000000/(12*(salario-despesas));
	cout << "Anos para juntar 1 milhao: " << anos <<endl;
}





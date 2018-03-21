#include <iostream>
#include "relator.hpp"

/**
* @file relator.cpp
* @brief Função relator lê 10 valores e retorna a quantidade que você digitou cada
*/
void relator() {
	int i;
	std::cout << "Digite 10 valores quaisquer:\n" << std::endl;
	int valores[10][2];
	for (i=0; i<10; i++) {
		valores[i][0]=0;
		valores[i][1]=0;
	}
	int n, cont=0;
	for(i=0; i<10; i++) {
	std::cin >> n;
		for(int j=0; j<10; j++) {
		if(n==valores[j][0]&&i>0) {
			valores[j][1]++;
			break;
		}
		else {
			if(j==9) {
			valores[cont][0]=n;
			valores[cont][1]++;
			cont++;
			}
		}
		}
	}
	i=0;
	std::cout << std::endl;
	while (valores[i][0]!=0&&i<10) {
		std::cout << valores[i][0] << " Foi digitado: " << valores[i][1] << " vezes" << std::endl;
		i++;
	}
}

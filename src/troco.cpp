#include <iostream>
#include "troco.hpp"

/**
* @file troco.cpp 
* @brief Função troco subtraí as notas do total até zerar, contando quantas vezes conseguiu subtrair cada nota.
* @details Função troco utiliza um vetor nt[] com as notas disponiveis(dispostas em ordem decrescente), while subtraí nt[i] do valor n(valor total) enquanto a operação resultar em >=0, se resultar em menor que 0, o vetor recebe i+1, assim passando para uma nota menor até zerar n. Vetor v[] serve meramente como contador.
*/
void troco() {
	int n;
	int nt[7]= { 100, 50, 20, 10, 5, 2, 1 }, v[7] = {0};
	std::cout << "Digite o montante (R$): " << std::endl;
	std::cin >> n;
	for (int i=0; i<7; i++) {
		while((n-nt[i])>=0) {
			n = n-nt[i];
			v[i]++;
		}
	}
	std::cout << std::endl;
	for(int i=0; i<7; i++) {
		if(v[i]>0) std::cout << v[i] << " nota(s) de " << nt[i] << " reais" << std::endl;
	}
}

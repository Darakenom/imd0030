#include <iostream>
#include "troco.hpp"
#include "relator.hpp"
#include "milhao.hpp"

/**
* @file main.cpp
* @brief Central que permite o usúario escolher qual função do programa deseja executar
* @author Tiago Martins Da Silva, Daniel Miercalm Chaves 
* @since 08/03/2018
* @date 20/03/2018
* @sa https://github.com/Darakenom/imd0030
*/
int main() {
	int n=0;
	while(n!=4){
	std::cout << "\n#############################\nEscolha o modo de uso:\n" << "\n1 - Quem quer ser milionario" << std::endl;
	std::cout << "2 - Quantos numeros digitei" << "\n3 - Troco" << "\n4 - Quit/Exit \n############################# \n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
		if(n==1) {
			milhao();
		}
		if(n==2) {
			relator();
		}
		if(n==3) {
			troco();
		}
	}
	return 0;
}

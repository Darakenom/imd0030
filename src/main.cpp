#include <iostream>
#include "troco.hpp"
#include "relator.hpp"
#include "milhao.hpp"

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

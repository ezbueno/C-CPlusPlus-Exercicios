#include<iostream>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int num, cont, qtDivi = 0;
	
	std::cout << "Digite um n�mero: ";
	std::cin >> num;
	
	if (num == 0 || num == 1){
		std::cout << "O n�mero " << num << " n�o � primo\n";
	}
	
	for (cont = 1; cont <= num; cont++){
		//std:: cout << cont << "\n";
		if (num % cont == 0){
			qtDivi = qtDivi + 1;
		}
	}
	if(qtDivi > 2){
		std::cout << "O n�mero " << num << " n�o � primo\n";
	}else if (qtDivi > 1 && qtDivi == 2){ 
		std::cout << "O n�mero " << num << " � primo\n";
	}
	
//	std::cout << "Ao todo existe(m) " << qtDivi << " valor(es) divis�vel/divis�veis\n";
	

}

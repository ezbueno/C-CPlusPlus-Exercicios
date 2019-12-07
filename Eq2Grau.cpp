#include<iostream>
#include<math.h>
#include<conio.h>
#include<locale.h>
#include<iomanip>
//using namespace std;


int main (){
	
	setlocale(LC_ALL, "ptb");
	
	float a, b, c, delta, x1, x2;
	
	
	//ax2 + bx + c
	//delta = b2 - 4 * a * c
	//x1 e x2 = -b +- sqrt(delta) / 2 * a
	
	std::cout << "Digite o valor de A: ";
	std::cin >> a;
	std::cout << "Digite o valor de B: ";
	std::cin >> b;
	std::cout << "Digite o valor de C: ";
	std::cin >> c;
	
//	x1 = (-b + sqrt(pow(b,2) - 4 * a * c )) / (2 * a);
//  x2 = (-b - sqrt(pow(b,2) - 4 * a * c )) / (2 * a);

	if (a != 0){
		delta = pow(b,2) - 4 * a * c;
		if (delta == 0){
			x1 = (-b + sqrt(delta)) / (2 * a);
			std::cout << "Delta é igual a 0\n";
			std::cout << "x1 e x2 = " << x1;
	}else if (delta > 0){
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			std::cout << "Delta é maior do que 0\n";
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "x1 = " << x1 << "\n";
			std::cout << std::fixed << std::setprecision(2);
			std::cout << "x2 = " << x2 << "\n";
		}else{
			std::cout << "Delta é menor do que 0" << "\n";
			std::cout << "Não existe raíz real" << "\n";
		}
	}else{
		std::cout << "Não é uma equação do 2º grau" << "\n";
		std::cout << "O valor de a tem que ser diferente de 0" << "\n";
	}
}
	

#include<iostream>
#include<locale.h>
#include<string>
using std::string;
#define TOTAL_ALUNOS 4
#define TOTAL_BIMESTRES 4
#define NOTA_MINIMA 7


int main() {
	
	setlocale (LC_ALL, "Portuguese");
	
	double notaAlunos[TOTAL_ALUNOS][TOTAL_BIMESTRES];
	double mediaAlunos[TOTAL_BIMESTRES];
	string nomeAlunos[TOTAL_ALUNOS];	
	
	//Obter os nomes dos alunos
	std::cout << "==== C A D A S T R O  D E  A L U N O S ====" << "\n \n";
	for (int i = 0; i < TOTAL_ALUNOS; i++){
		std::cout << "Digite o nome do(a) " << (i + 1) << " º aluno(a): ";
		std::cin  >> nomeAlunos[i];
	}
	
	std::cout << "\n";
	
	//Obter as notas dos alunos em todos os bimestres
	std::cout << "==== L A N Ç A M E N T O  D A S  N O T A S ====" << "\n \n";
	for (int i = 0; i < TOTAL_ALUNOS; i++){
		for (int j = 0; j < TOTAL_BIMESTRES; j++){
			std::cout << "Digite a nota do(a) aluno(a) " << nomeAlunos[i] << " para o " << (j + 1) << " º bimestre: ";
			std::cin  >> notaAlunos[i][j];
		}
		std::cout << "\n";
	}
		
	//Calcular as médias das notas dos alunos
	for (int i = 0; i < TOTAL_ALUNOS; i++){
		for (int j = 0; j < TOTAL_BIMESTRES; j++){
				mediaAlunos[i] += notaAlunos[i][j];
			}
			mediaAlunos[i] /= TOTAL_BIMESTRES;
		}
		
	std::cout << "\n";
		
	//Mostrar o Resultado Final
	std::cout << "==== R E S U L T A D O  F I N A L ====" << "\n \n";
	for (int i = 0; i < TOTAL_ALUNOS; i++){
		if (mediaAlunos[i] >= NOTA_MINIMA){
			std::cout << "Nome: " << nomeAlunos[i] << "\n"; 
			std::cout << "Média: " << mediaAlunos[i] << "\n";
			std::cout << "Situação: Aprovado" << "\n \n";
			continue;
		}
			std::cout << "Nome: " << nomeAlunos[i] << "\n"; 
			std::cout << "Média: " << mediaAlunos[i] << "\n";
			std::cout << "Situação: Reprovado" << "\n \n";			
	}	
}



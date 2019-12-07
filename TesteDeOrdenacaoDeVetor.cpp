#include<iostream>
#define TAM 5

int main(){
	
	int i, j, aux, vetor[5];
	
	
	vetor[0] = 5;
	vetor[1] = 2;
	vetor[2] = 1;
	vetor[3] = 10;
	vetor[4] = -1;
	
		for (i = 0; i < TAM-1; i++){
			for (j = i + 1; j < TAM; j++) {
				if (vetor[i] > vetor[j]){
					aux = vetor[i];
					vetor[i] = vetor[j];
					vetor[j] = aux;
				}
			}
		}
		
		for (i = 0; i < TAM; i++) {
			std::cout << vetor[i] << " ";
		}
		
}

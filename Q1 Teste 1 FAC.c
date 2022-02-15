#include <stdio.h>

void alteraVetorForma1(int vetor[], int n){
  for(int i = 0; i < n; i+= 2){
    vetor[i] *= 3;
  }

  for(int i = 0; i < n; i++){
    if(vetor[i] % 2 != 0){
      vetor[i] *= 5;
    }
  }
}

void alteraVetorForma2(int vetor[], int n){
  for(int i = 0; i < n; i++){
	  if (i%2 == 0){
		vetor[i] *= 3;
	  }
	  if  ( vetor[i]%2 !=0){
		  vetor[i] *= 5;
	}
  }

void exibeVetor(int vetor[], int n){
  for(int i = 0; i < n; i++){
    printf("Posição %d:  // Valor : %d\n", i, vetor[i]);
  }
}

int main(void) {
  int vetor1[5] = {3, 2, 5, 9, 6};


  printf("\nVetor antes da função alteraValor\n\n");
  exibeVetor(vetor1, 5);


  alteraVetorForma1(vetor1, 5);  //alteraVetorForma2(vetor1, 5);

  printf("\n\nVetor após o uso da função alteraValor\n\n");
  exibeVetor(vetor1, 5);

}
/*Q2 - Vetores
a) Construa uma função que receba dois vetores de valores inteiros A e B de tamanho N e mostre as posições
onde A e B têm o mesmo valor, bem como o valor.
Exemplo:
A={3,7,6,2,2} B={9,1,6,1,2} ---&gt; posição 2: valor 6
posição 4: valor 2
b) Construa uma função main para testar sua função, Crie os vetores por enumeração.*/

#include <stdio.h>
#define N 5
 
void mesmoValor(int v1[],int v2[], int tam){
  for(int i = 0;i<tam;i++)  {
    if(v1[i] == v2[i])
      printf("\nNa posição %d de ambos tem %d",i,v1[i]);
  
  }
 
}
 
int main(void) {
 
  int vA [N]={3,7,6,2,2};
  int vB [N]={9,1,6,1,2};
  
  
  mesmoValor(vA,vB,N);
 
  return 0;
}
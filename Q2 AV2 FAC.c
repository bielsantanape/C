/*
a) Construa uma função que receba dois vetores de valores inteiros A e B de tamanho N e mostre as posições
onde a diferença absoluta entre A e B é par, bem como os valores de A, B e a diferença absoluta.
Exemplo:
A={3,7,6,5,2} B={9,2,5,1,3} ---&gt; posição 0: A:3 B:9 diferença absoluta:6
posição 3: A:5 B:1 diferença absoluta:4
b) Construa uma função main para testar sua função, Crie os vetores por enumeração.*/


#include <stdio.h>
 
void mostrarPosicaoAbsoluta(int v1[],int v2[], int tam){
  int k;
  for(int i = 0; i<tam; i++)  {
    k= v1[i] - v2[i];
    if((k % 2) == 0){
      printf("\nPosição %d.\nA:%d\nB:%d\nDiferença absoluta: %d\n",i,v1[i],v2[i],k);      
    }
  }
}
 
int main(void) {
 
  int vA [5]={3,7,6,5,2};
  int vB [5]={9,2,5,1,3};
  
  
  mostrarPosicaoAbsoluta(vA,vB,5);
 
  return 0;
}

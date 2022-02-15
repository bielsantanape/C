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
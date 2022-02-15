/* Sistema de vendas :
   Um produto:  cod, qtEstoque, valorUnit
   coleção de produtos--> vetor de produtos 
   vetores paralelos:  vCod, vEst, vPr

   1ª) Carregar a base de produtos 
   2ª) Consulta e venda de produtos

*/

#include <stdio.h>
#define TAM 2000

int preenche(int n, int vCod[], int vEst[], float vPr[]){
    // colocar os dados dos produtos nos vetores
    int i;
    vCod[0]=12;    vEst[0]=4;    vPr[0]=1;
    vCod[1]=22;    vEst[1]=14;    vPr[1]=10;
    vCod[2]=11;    vEst[2]=400;    vPr[2]=1000;
    vCod[3]=34;    vEst[3]=0;    vPr[3]=2;
    return 4;
}
int busca(int n, int v[], int valor){
  int i;
  for(i=0; i<n;i++){
    if ( v[i] ==valor)
      return i;
  }
  return -1;
}
void consulta(int qt, int vCod[], int vEst[], float vPr[], int produto){
    int pos, qtDes;
      pos = busca(qt,vCod,produto);
      if (pos!=-1){  // se existe com estoque ou sem estoque

        if (vEst[pos] >0) { // com estoque
          printf("\n%d unidades disponíveis",vEst[pos]);
          printf("\nQtos produtos vc deseja?");
          scanf("%d", &qtDes);
          if (qtDes > vEst[pos] ){
            printf("\n Quantidade não pode ser atendida");
          }
          else{
            printf("\nTotal a pagar: %.2f", vPr[pos]*qtDes);
            // iria para a tela de pagamento
            vEst[pos]-=qtDes;

          }
        }
        else{ // sem estoque
          printf("\nInfelizmente estamos sem o produto");
        }
      }
      else{
        printf("\nOps ... Não temos este produto.");

      }
      return;
}



int main(void){

  int vCod[TAM],  vEst[TAM];
  float vPr[TAM];
  int qt;
  int produto;
  qt=preenche(TAM, vCod, vEst, vPr);
  printf("Digite o produto desejado: ");
  scanf("%d",&produto);
  while (produto>0){
    consulta(qt,vCod,vEst,vPr,produto);
    printf("Digite o produto desejado: ");
    scanf("%d",&produto);
  }
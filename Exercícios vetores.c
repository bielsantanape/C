#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerNumAleat(int limInf, int limSup){
int dif=(limSup-limInf)+1;
return rand()%dif + limInf;

}
/*
1) Captura os valores do teclado e armazenando-os em um vetor
2) mostre o produto interno dos dois vetores. Esta função deve preencher dois vetores X
e Y com os dados do teclado.
Exemplo para vetores que possuem 4 elementos
Exemplo:
X = (1,2,3,4) Y = (4,3,2,1)  X.Y = 1*4 + 2*3 + 3*2 + 4*1 = 20
3) Exiba um vetor recebido na ordem inversa
4) Exiba os elementos de um vetor recebido das posições pares seguidos das posições ímpares
5) Recebe um vetor, perguntar ao usuário o número de posição desejada e exibir o valor
da posição. Término: valor de posição inválida pos<0 ou pos >=tam)
5,5) Construir função que recebe um vetor e um valor e retorna a posição onde este valor está no vetor ou -1 ( um número de posição inválida) se o valor não está no vetor
6) Mostrar o maior valor armazenado de um vetor recebido
7) Somar os elementos de um vetor recebido
8) Contar quantos números ímpares tem em um vetor recebido
9) Mostra quais valores são menores que o valor armazenado na última posição do vetor
recebido
10) Mostrar a média dos valores armazenados no vetor recebido
11) Mostrar quantos valores do vetor recebido são menores que a média
12) Mostrar quais valores do vetor recebido são maiores que a média
13) Retornar o número da posição do vetor recebido que armazena um valor rambém recebido (busca)

*/
void mediaVetor(int vet[],int tam){
    float somat = somaVetor(vet,tam);
    printf("\n A media desse vetor é: %.2f",somat/tam);
}

int busca(int valor, int vet[], int tam){
  /* se o valor pertence ao vetor --> a pos onde o valor está senão --> -1*/
    int i;
    for(i=0;  i<tam;i++){
        if (vet[i]==valor)
            return i;
    }
    return - 1; /* o valor não está o vetor */
}

void contaImpar(int vet [],int tam){
    int impar=0;
    for(int i =0;i < tam;i++){
    if(vet[i]%2==0) {
    }
    else 
        impar++;
    }
    printf("\n São %d números ímpares", impar);
}


int somaVetor(int vet[],int tam){
    int soma=0;
    for(int i = 0;i<tam;i++){
        soma +=vet[i] ;
    }
    return soma;
}

void maiorValor(int vet[],int tam){
    int maior=vet[0];;
    for(int i = 1; i<tam; i++){
        if(vet[i]>maior)
            maior=vet[i];
    }
    printf("O maoir numero desse vetor é: %d",maior);
    return;
}


void qualCasa (int vet[],int tam){
    printf("\n================================");
    int escolha;

    printf("\n(Sair valor <-1 ou valor >=%d) Qual casa deseja ver? ",tam);
    scanf("%d",&escolha);
    while(escolha >= 0 && escolha < tam){
        printf("\n Na casa %d , tem: %d", escolha,vet[escolha]);
        printf("\n(Sair valor <-1 ou valor >=%d) Qual casa deseja ver? ",tam);
        scanf("%d",&escolha);
    }
    return;
}

void preencheVetor (int vet[],int x){
    printf("================================");
    for( int i=0 ; i<x ; i++){
        printf("\nQual o %dº numero desse vetor? ",i+1);
        scanf("%d",&vet[i]);
    }

}

void PosParesPosImpares (int vet[],int tam ){
    printf("\n================================");
    for (int i = 0; i < tam;i+=2 ){
        printf("\n Pos:%d: %d ",i,vet[i]);
    }
    for (int i = 1; i < tam;i+=2 ){
        printf("\n Pos:%d: %d ",i,vet[i]);
    }
}

void acessaAleatorio(int vDados[], int tam, int vPos[], int qt){
    int i,pos;
    for (i=0;i<qt;i++){
        pos=vPos[i];
        printf("\nElemento da pos %d: %d",pos,vDados[pos]); //vDados[vPos[i]]
    }
    return;
}

void exibeVetorInvert (int vet[],int tam ){
    printf("\n================================");
    for (int i = tam; i != 0;i-- ){
        printf("\n O valor da %dº casa é :%d ",i,vet[i-1]);
    }
    return;
}

void produtoVetores(int vet[],int tam,int vet2[],int tam2){
    printf("\n==========================");
    int soma; // 1ºde v1 x 1º de v2 + 1º de v1 x 1º de v2
    int produto =0;
    soma=0;
    for( int i=0 ; i<tam ; i++){
        soma += vet[i] * vet2[i];
    }
    printf("\n A soma dos produtos é: %d",soma);
    return;
}


int main(void) {
    int v1[8]={2,4,1,6,5,7,3,10};
    int v2[8]={ 4,2,8,9,1,10,6,14};
    int pos;

    pos=busca(69,v1,8);

    if (pos==-1){
        printf("\n69 não está no vetor");
    }
    else{
        printf("69 está na pos %d do vetor",pos);
    }
    pos=busca(6,v1,8);
    if (pos==-1){
    printf("\n6 não está no vetor");
    }
    else{
    printf("\n6 está na pos %d do vetor",pos);
    }

return 0;
}
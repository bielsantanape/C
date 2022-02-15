/*Programa que altera a senha do usuário já cadastrado.*/

#include <stdio.h>

#define Tamanho 8

int buscarArray(int vetor[], int tamanhoArray, int valor){
  for(int i = 0; i < tamanhoArray; i++){
    if(vetor[i] == valor){
      return i;
    }
  }
  return -1;
}

void percorerArray(int vetor[], int tamanhoArray){
  for(int i = 0; i < tamanhoArray; i++){
    printf("%d\n", vetor[i]);
  }
}

void alteraSenha(int arrayUsuarios[], int arraySenhas[], int n){
  int loginUsuario;
  int posicao;
  int senhaAtual, novaSenha1, novaSenha2;

  printf("Digite o seu usuário para alterar a senha \n");
  scanf("%d", &loginUsuario);

  posicao = buscarArray(arrayUsuarios, n, loginUsuario);

  if(posicao == -1){
      printf("Usuário não encontrado. Por favor, tente novamente.\n\n");
  } 
  else {
      printf("Digite a sua senha atual.\n\n");
      scanf("%d", &senhaAtual);
      if (senhaAtual != arraySenhas[posicao]){
        printf("Senha incorreta.\n\n");
      } 
      else {
        printf("Digite a nova senha.\n\n");
        scanf("%d", &novaSenha1);
        printf("Confirme a senha.\n\n");
        scanf("%d", &novaSenha2);
        if(novaSenha1 == novaSenha2){
          arraySenhas[posicao] = novaSenha1;
          printf("Senha alterada com sucesso.\n\n");
          printf("Array com as senhas atualizadas:\n\n");
          percorerArray(arraySenhas, Tamanho);
        } 
        else {
          printf("Ops! As senhas são diferentes. Tente novamente.\n\n");
        }
      }
    }
    return;
  }

int main(void) {
  int arrayUsuarios[Tamanho] = {123, 234, 345, 456, 654, 543, 432, 999};
  int arraySenhas[Tamanho] = {111, 222, 333, 444, 555, 666, 777, 888};
  alteraSenha(arrayUsuarios,arraySenhas,Tamanho);
  return 0;
}
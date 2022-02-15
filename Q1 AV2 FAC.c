#include <stdio.h>

int calculaIdade(int idade){
  if (idade>=18)
    return 1;
  else
    return 0;
}

void calculaVales(int idade, int qtLivroTecnico, int qtLivroNaoTec, int*qtVales, int*precoVales,int qtTotalLivros){
  int age, qtdTotalLivros;
  age = calculaIdade(idade);
  qtdTotalLivros= qtLivroTecnico + qtLivroNaoTec;

  //calculando a quantidade de vales e seus valores.
  if(qtLivroTecnico == 3 || qtLivroNaoTec == 3){
    (*qtVales)=1;
    (*precoVales)= 100;
  }else if (qtTotalLivros == 3){
    (*qtVales)= 2;
    (*precoVales)= 80;      
  }else if(qtTotalLivros >= 4){
    (*qtVales)= qtTotalLivros/2;
    (*precoVales)= 60;   
  }
  if (age == 1 && qtdTotalLivros >= 3){
    printf("Você tem direito aos vales do Programa.\n");
    }else
      printf("Você não tem direito aos vales do programa\n.");
}

int main() {
  int id, idade, qtLivroTecnico, qtLivroNaoTec, qtVales, precoVales, qtdTotalLivros;
  qtdTotalLivros = qtLivroTecnico+qtLivroNaoTec;
//entrada de dados.
  printf("Digite seu número de inscrição no programa:\n");
  scanf("%d",&id);
  
  while(id>=0){
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("Digite a quantidade de livros comprados no último trimestre:\n");
    printf("Livros técnicos:\n");
    scanf("%d",&qtLivroTecnico);
    printf("Livros não técnicos:\n");
    scanf("%d",&qtLivroNaoTec);
    
    //chamada da função.
calculaVales(idade,qtLivroTecnico,qtLivroNaoTec,&qtVales,&precoVales, qtdTotalLivros);
  if(idade>=18){
  printf("Você tem direito a %d vales de %d reais.\n",qtVales, precoVales);
  }
    printf("Digite seu número de inscrição no programa:\n");
    scanf("%d",&id);
  }
      return 0;

    
}
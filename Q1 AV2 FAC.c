/*Q1 - Tomada de decisão, função,repetição e ponteiros.
1. Uma livraria que vende livros técnicos e não técnicos, possui um programa de fidelidade que
distribui vales-presentes trimestralmente para seus clientes do seguinte modo:
a. Apenas maiores de idade podem receber vales
b. menos de 3 livros comprados: não tem direito
c. 3 livros comprados mas apenas de um tipo: 1 vale de 100,00
d. 3 livros comprados mas dos dois tipos: 2 vales de 80,00
e. a partir 4 livros comprados: (nº de livros comprados /2) vales de 60,00
Faça um programa, utilizando as funções abaixo, que leia para cada cliente do programa
fidelidade, seu número de inscrição no programa, sua idade, a quantidade de livros técnicos e a
quantidade de livros não técnicos comprados por ele no último trimestre e lhe mostre a
quantidade de vales e o valor destes vales caso tenha direito
A entrada é finalizada quando o valor do número de inscrição digitado for negativo.
a) faça uma função que receba a idade de uma pessoa e retorne 1 se for maior de idade e 0
caso contrário
b) faça uma função para CALCULAR ( apenas calcular NÃO exibir) a quantidade de vales e o
valor do vale. Esta função recebe a idade, quantidade de livros técnicos, a quantidade de livros
não técnicos comprados e o endereço de duas variáveis que serão preenchidas com a
quantidade de vales e respectivo valor. Esta função deve chamar a função anterior*/


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

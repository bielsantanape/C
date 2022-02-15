/*Q1 - Ponteiros
Construa a função quebraData que receba uma quantidade de dias e o endereço de duas variáveis,
armazenando na primeira, a quantidade de semanas e na segunda a quantidade de dias que não
completam uma semana
Exemplos:
Dias: 10  1 semana e 3 dias
Dias: 120  17 semanas e 1 dia
b) Construa a função meorSemanaMaiordias que recebe duas quantidades de dias e o endereço de duas
variáveis, retornando na primeira a maior quantidade de semanas entre elas e na outra a menor
quantidade de dias entre elas:
Exemplo: dias1: 10 dias2:120 maiorSemana:17 menorDia:1
c) Construa uma função main para testar sua função. Deve haver pelo menos 2 testes distintos. Utilize a função
descobre_DataPascoa.*/

#include <stdio.h>
 
void quebraData(int dias,int *semana,int *diaQueb){
 
    (*semana) = dias /7;
    (*diaQueb)= dias % 7 ;
    return;
}
 
void maiorSemanaMenordias (int dias1, int dias2, int*MaiorSemana, int*MenorDia){
  int sem1,dia1;
  int sem2, dia2;

  quebraData(dias1,&sem1,&dia1);
  quebraData(dias2,&sem2,&dia2);
  if(dia1 < dia2 ) (*MenorDia) = dia1;
  else             (*MenorDia) = dia2;
 
  if(sem1>sem2) (*MaiorSemana) = sem1;
  else          (*MaiorSemana) = sem2;
 
 
  return;
}
 
 
 
int main(void) {
 
    int dias1 =10;
    int dias2 = 120;
    int MaiorSemana;
    int MenorDia;
 
    maiorSemanaMenordias(dias1, dias2,&MaiorSemana,&MenorDia);
 
    printf("%d é a maior semana e %d menor dia.\n",MaiorSemana,MenorDia);
 
    return 0;
}

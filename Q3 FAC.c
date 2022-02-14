/*
Considere os seguintes vetores paralelos:
➢ Com os dados dos cursos de extensão ofertados nas 8 unidades de uma universidade:
○ vCod: cada posição armazena o número identificador de um curso de extensão da universidade
(número qualquer)
○ vMes: cada posição armazena o mês que o curso será ofertado (número entre 1 e 12)
○ vValor: cada posição armazena o valor do curso ofertado

➢ com as inscrições dos alunos nos cursos:
○ vMatrAl: com a matrícula do aluno inscrito
○ vCursoAl: com o número do curso que o aluno está inscrito

Construa uma função que receba estes vetores e:
 mostre para cada aluno em que mês o curso será ofertado e valor de seu curso e
 quantidade de alunos inscritos pormês (independente do curso)
Obs: Os vetores só podem ser percorridos uma vez
*/

#include <stdio.h>

void zera (float v[], int n){
  int i;
  
  for (i=0;i<n;i++){
    v[i]=0;
  }
}

int busca(int v[], int n, int chv){
	int i;

	for (i=0;i<n;i++){
    if( v[i]==chv) 
      return i;
	}
	return -1; 
}

void calculaAlunos(int vMatrAl[],int vCursoAl[],int vCod[],int vMes[],float vValor[], float vTotAlPorMes[]){ 
  int i,pos,posMes,k;

  for(i=0;i<35;i++){
    pos=busca(vCod,12,vCursoAl[i]);
    if (pos !=-1){
      printf("\nAluno %d. - Curso %d. Mês: %d - %.2f ",vMatrAl[i],vCursoAl[i],vMes[pos],vValor[pos]);
    }
    else{
      printf("\nAl %d - Curso %d inexistente",vMatrAl[i],vCursoAl[i]);
    }
    posMes = vMes[pos]-1;
    if (posMes<12){
      vTotAlPorMes[posMes]+=1;
    }

  }

}

int main(void) {
  int vCod[12]= {23,12,77,45,90,78,56,43,11,912,9,22};
  int vMes[12]= {1,8,6,2,3,9,4,5,6,12,7,1};
  float vValor[12]={100,200,150,400,500,350,250,100,900,500,250,650};
 
  int vMatrAl[35]= {141,79,159,110,115,138,54,200,163,77,137,105,199,124,166,127,50,135,189,159,120,64,125,139,75,178,84,176,133,116,71,182,168,129,104};
  int vCursoAl[35]={23,12,77,45,90,78,56,43,11,912,9,22,23,12,77,45,90,78,56,43,11,912,9,22,912,9,22,23,12,77,45,90,78,56,43};
  
  float vTotAlPorMes[12];
  int i;

  zera(vTotAlPorMes,12);
  calculaAlunos (vMatrAl,vCursoAl,vCod,vMes,vValor,vTotAlPorMes);
  printf("\n\n\n Quantidades de alunos inscritos por mês.\n");
  for (i=0;i<12;i++){
    printf("\nMês: %d - Total: %.f alunos.",i+1,vTotAlPorMes[i]);
  }
  
  
  return 0;
}
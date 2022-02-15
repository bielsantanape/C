/*Q3 - Vetores
Considere os seguintes vetores paralelos:
➢ Com os dados dos cursos de extensão ofertados nas 8 unidades de uma universidade:
○ vCod: cada posição armazena o número identificador de um curso de extensão da universidade
(número qualquer)
○ vUnid: cada posição armazena o número da unidade onde o curso é ofertado (número entre 1 e 8)
○ vValor: cada posição armazena o valor do curso ofertado

➢ com as inscrições dos alunos nos cursos:
○ vMatrAl: com a matrícula do aluno inscrito
○ vCursoAl: com o número do curso que o aluno está inscrito

Construa uma função que receba estes vetores e:
 mostre para cada aluno qual a unidade e valor de seu curso e
 o valor total recebido pelos cursos em cada unidade. (soma dos valores dos cursos nos quais os alunos estão
inscritos)
Obs: Os vetores só podem ser percorridos uma vez*/


#include <stdio.h>
#define CUR 12
#define AL 35
#define UNID 8

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

void fContabiliza(int vMatrAl[],int vCursoAl[],int l,int vCod[],int vUnid[],float vValor[],int k, float vTotUnid[]){
  int i,pos,posunidade;
  for(i=0;i<l;i++){
    pos=busca(vCod,k,vCursoAl[i]);
    if (pos !=-1){
      printf("\nAl %d - Curso %d Unidade: %d - %.2f ",vMatrAl[i],vCursoAl[i],vUnid[pos],vValor[pos]);
    }
    else{
      printf("\nAl %d - Curso %d inexistente",vMatrAl[i],vCursoAl[i]);
    }
    posunidade=vUnid[pos]-1;
    if (posunidade<UNID){
      vTotUnid[posunidade]+=vValor[pos];
    }

  }

}

int main(void) {
  int vCod[CUR]= {23,12,77,45,90,78,56,43,11,912,9,22};
  int vUnid[CUR]= {1,8,6,2,3,9,4,5,6,8,7,1};
  float vValor[CUR]={100,200,150,400,500,350,250,100,900,500,250,650};
 
  int vMatrAl[AL]= {141,79,159,110,115,138,54,200,163,77,137,105,199,124,166,127,50,135,189,159,120,64,125,139,75,178,84,176,133,116,71,182,168,129,104};
  int vCursoAl[AL]={23,12,77,45,90,78,56,43,11,912,9,22,23,12,77,45,90,78,56,43,11,912,9,22,912,9,22,23,12,77,45,90,78,56,43};
  
  float vTotUnid[UNID];
  int ii;
  int i;

  //zera(vContUnid);

  //funcAleatoria (vMatrAl,vCursoAl,vCod,vUnid,vContUnid,vValor);
  zera(vTotUnid,UNID);
  printf("\n************");
  fContabiliza (vMatrAl,vCursoAl,AL,vCod,vUnid,vValor,CUR,vTotUnid);
  printf("\n************");
  for (i=0;i<8;i++){
    printf("\nUnid: %d - Total: %.2f",i+1,vTotUnid[i]);
  }
  
  
  return 0;
}
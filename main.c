#include<stdio.h>
#include<stdlib.h>
#include "regra.h"
void main(){
	imprimir();
	int op;
	printf("\nEssas sao as pecas do jogo da memoria, para continuar digite 1 e para sair 2: ");
	scanf("%d",&op);
	op==1?jogar():sair();
}

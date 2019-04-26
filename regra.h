#include <stdio.h>
#include "tabela.h"

int escolher_peca(int pt){
	imprimir_permanente();
	int p1;
	int p2;
	int p3;
	int p4;
	printf("Primeira peca\n");
	do{
		do{
			printf("Digite a linha da primeira peca (0 ate 7): ");
			scanf("%d",&p1);
			if(p1<0 || p1>7)printf("Por favor, digite novamente. Escolha apenas de 0 ate 7: \n");
		}while(p1<0 || p1>7);

		do{
			printf("Digite a coluna do primeira peca (0 ate 3): ");
			scanf("%d",&p2);
			if(p2<0 || p2>3)printf("Por favor, digite novamente. Escolha apenas de 0 ate 3: \n");
		}while(p2<0 || p2>3);
	}while(verificar(p1, p2)==1);
	
	printf("Segunda peca\n");
	do{
		do{
			do{
				printf("Digite a linha da primeira peca (0 ate 7): ");
				scanf("%d",&p3);
				if(p3<0 || p3>7)printf("Por favor, digite novamente. Escolha apenas de 0 ate 7: \n");
			}while(p3<0 || p3>7);
		
			printf("Digite a coluna do primeira peca (0 ate 3): ");
			scanf("%d",&p4);
			if(p1==p3 & p2==p4)printf("Por favor, digite novamente. Escolha uma peca diferente da primeira: \n");
			if(p4<0 || p4>3)printf("Por favor, digite novamente. Escolha apenas de 0 ate 3: \n");
		}while(p1==p3 & p2==p4 || (p4<0 || p4>3) );
	}while(verificar(p1, p2)==1);
	
	if(tabela[p1][p2]==tabela[p3][p4]){
		tabela2[p3][p4]=tabela[p3][p4];
		tabela2[p1][p2]=tabela[p1][p2];
	}
	
	int ponto = pt+1;
	return ponto;
}
int ponto1 = 0;
int ponto2 =0;
	
void jogar(){
	
	int op;
	do{ system("cls");
		printf("Jogador 1 \n");
		ponto1 = escolher_peca(ponto1);
		printf("Jogador 2 \n");
		ponto2 = escolher_peca(ponto2);

		printf("Deseja continuar? 1- sim 2- Nao");
		scanf("%d",&op);
	}while(op==2);		
}	

void sair(){
	 if(ponto1 == ponto2){
		printf("Empate!!!");
	 }else ponto1>ponto2?"O jogador 1 e o vencedor!!!\n ":"O jogador 2 e o vencedor!!!\n ";
	 printf("Pontuacao do jogador 1 %d \n",ponto1);
	 printf("Pontuacao do jogador 2 %d \n",ponto2);
	 
	 printf("Fim de execucao");
	 exit(0);
}	
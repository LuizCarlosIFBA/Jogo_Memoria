#include <stdio.h>

int tabela[8][4];
int tabela2[8][4];

void imprimir(){
		tabela[0][0] = 9;
		tabela[0][1] = 11;
		tabela[0][2] = 5;
		tabela[0][3] = 8;
		tabela[1][0] = 13; 
		tabela[1][1] = 14;				
        tabela[1][2] = 7;
		tabela[1][3] = 6;
 		
		tabela[2][0] = 4;		
 		tabela[2][1] = 12;
		tabela[2][2] = 4;
		tabela[2][3] = 13; 
		tabela[3][0] = 10;
		tabela[3][1] = 14;
		tabela[3][2] = 3;
		tabela[3][3] = 15;
		
		tabela[4][0] = 11;
	    tabela[4][1] = 1;
		tabela[4][2] = 3;
		tabela[4][3] = 16;
	    tabela[5][0] = 2;
		tabela[5][1] = 5;
		tabela[5][2] = 8;
		tabela[5][3] = 10;

		tabela[6][0] = 9;
		tabela[6][1] = 2;
		tabela[6][2] = 12;
		tabela[6][3] = 6;
		tabela[7][0] = 1;
		tabela[7][1] = 7;
		tabela[7][2] = 15;
		tabela[7][3] = 16;
		
		for (int a = 0; a < 8; a++)
        {
			for (int b = 0; b < 4; b++)
			{   if(tabela[a][b]<10)printf(" ");
				printf(" %d ",tabela[a][b]);
			}
			printf("\n");
		}
}

void imprimir_permanente(){
	for (int a = 0; a < 8; a++)
        {
			for (int b = 0; b < 4; b++)
			{   if(tabela2[a][b]<10)printf(" ");
				printf(" %d ",tabela2[a][b]);
			}
			printf("\n");
		}
}


int verificar(int i, int j){
		int valor = 0;
		for (int a = 0; a < 8; a++)
        {
			for (int b = 0; b < 4; b++)
			{   if(tabela[i][j]==tabela2[a][b]){
					valor = 1;
					printf("Essa posicao ja foi escolhida e a peca ja foi revelada, tente novamente\n");
				}	
			}
			printf("\n");
		}
		return valor;
}
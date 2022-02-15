#include <stdio.h>

/*
Igor Soler Cavalcanti - 42013550
Rafael Miranda Ferreira - 42080932
*/

// Pausa o código até receber um Input
void pausa(){
	printf("\nPressione alguma tecla para finalizar o programa!\n");
	getch();
	return;
}

//Função principal do código
int main(){
    printf(
    	"+--------------+\n"
	"| Hello World! |\n"
	"+--------------+\n");
	pausa();
    return 0;
}

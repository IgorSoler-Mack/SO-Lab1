#include <stdio.h>

// Pausa o c�digo at� receber um Input
void pausa(){
	printf("\nPressione alguma tecla para finalizar o programa!\n");
	getch();
	return;
}

int main(){
    printf(
    	"+--------------+\n"
		"| Hello World! |\n"
		"+--------------+\n");
	pausa();
    return 0;
}

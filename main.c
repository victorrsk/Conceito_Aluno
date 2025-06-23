#include <stdio.h>
#include "funcoes.h"

int main(){
	
	int nota;
	char conceito;
	
	printf("DIGITE SUA NOTA: \n");
	scanf("%d", &nota);
	
	conceito=defconceito(nota);
	
	if(nota<0 || nota>100){
		printf("NOTA INVALIDA");
	}else{
		printf("CONCEITO: %c\n",conceito);
	}
	return 0;
}

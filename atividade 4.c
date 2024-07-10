/*Faça um programa que leia uma letra que represente o estado civil de uma pessoa e mostre uma
mensagem com a sua descrição (Solteiro(a), Casado(a), Viúvo(a), Divorciado(a)). O programa
deve apresentar uma mensagem de adequada caso uma letra diferente seja informada.*/

#include <stdio.h>

int main()
		{
	
	char  letra;
	
	printf(" informe a primeira letra do seu estado civil");
	scanf("%c",&letra);
	
	if( letra =='s' || letra=='S'){
		printf("seu estado civil e solteiro");
	}else if( letra =='c' || letra=='C'){
		printf("seu estado civil e casado");
	}else if( letra == 'v' || letra == 'V'){
		printf("seu estado civil e viuvo");
	}else if(letra == 'd' ||  letra == 'D'){
		printf("seu estado civil e divorciado");
	}else {
		printf(" letra invalida");
	}
}


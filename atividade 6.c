/*Escreva um programa em C que leia uma letra e indique se ela é uma vogal ou consoante. Utilize
uma estrutura de caso para resolver este problema.*/

#include <stdio.h>

int main()
	{
		char letra;
		
		printf("digite uma letra");
		scanf("%c", &letra);
		
		if( letra == 'a' || letra =='A'){
			printf("%c e uma vogal", letra);
		}else if(letra == 'o'|| letra =='O'){
			printf(" %c e uma vogal", letra);
		}else if(letra == 'e'|| letra =='E'){
			printf(" %c e uma vogal", letra);
		}else if(letra =='i'|| letra == 'I'){
			printf(" %c e uma vogal", letra);
		}else if( letra == 'u'|| letra == 'U'){
			printf(" %c e uma vogal",letra);
		}
		else {
		printf(" %c e uma consoante", letra);
	
		}
	}

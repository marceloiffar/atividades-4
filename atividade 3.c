/*3. Escreva um programa que leia um número inteiro entre 1 e 10 e mostre-o escrito por extenso.
Caso seja inserido um número fora deste intervalo, o programa deve apresentar a mensagem
“Número inválido”.*/

#include <stdio.h>

int main()


{
	float nu1;
	
	printf("digite um numero entre 1 e 10");
	scanf("%f", &nu1);
	
	if( nu1 == 1){
		printf(" %f escrito por extenco e um", nu1);
	}else if( nu1 == 2){
		printf("%.2f escrito por extenco e dois", nu1);
	}else if( nu1== 3) {
		printf("%.2f escrito por extenco e tres", nu1);
	}else if( nu1== 4) {
		printf(" %.2f escrito por extenso e quatro", nu1);
	}else if(nu1 == 5) {
		printf("%.2f escrito por extenco e cinco", nu1);
	}else if( nu1 == 6) {
		printf("%.2f escrito por extenco e seis", nu1);
	}else if( nu1 == 7) {
		printf(" %.2f escrito por extenco e sete", nu1);
	}else if( nu1 == 8){ 
		printf("%.2f escrito por extenco e oito", nu1);
	}else if( nu1 == 9) {
		printf(" %.2f escrito por extenco e nove", nu1);
	}else if( nu1 == 10){
		printf(" %.2f escrito por extenco e dez", nu1);
	}else {
		printf(" numeri digitado invalido");
	}
}

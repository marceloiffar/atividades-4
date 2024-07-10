/*Um clube de futebol pretende classificar seus atletas em categorias. Para isso ele contratou um
programador para criar um programa para executar essa tarefa. O programa deve solicitar o nome
e a idade de um atleta e imprimir os seus dados juntamente com a sua categoria. Utilize a tabela
abaixo para determinar a categoria de cada atleta.
Idade Categoria
05 a 10 Infantil
11 a 15 Juvenil
16 a 20 Junior
21 a 25 Profissional*/

#include <stdio.h>

int main() {
	
	
	char nome;
	float idade;
	
	printf("digite o nome do atleta");
	scanf("%s", &nome);
	
	printf(" digite a idade do atleta");
	scanf("%f", &idade);
	
	if(idade >= 5 && idade < 10){
		printf(" %s faz parte da categoria infantil", nome);
	}else if(idade >= 11 && idade < 15){
		printf("%s faz parte da categoria juvenil", nome);
	}else if(idade >= 16 && idade < 20) {
		printf(" %s faz parte da categoria junior", nome);
	}else if( idade >= 21 && idade < 25){
		printf("%s faz parte da catwgoria proficional", nome);
	}
}

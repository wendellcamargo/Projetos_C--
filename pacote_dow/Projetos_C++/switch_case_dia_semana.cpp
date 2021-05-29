#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portugues");
	
	int n;
	printf("Digite um número de 1 a 7 que represente o dia da semana que voce quer: ");
	scanf("%d",&n);
	printf("O dia da semana escolhido por voce foi: ");
	switch (n){
		case 1: printf("Domingo");break;
		case 2: printf("Segunda-feira");break;
		case 3: printf("Terça-feira");break;
		case 4: printf("Quarta-feira");break;
		case 5: printf("Quinta-feira");break;
		case 6: printf("Sexta-feira");break;
		case 7: printf("Sábado");break;	
	}
	
	getch();
	return 0;
}

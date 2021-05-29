#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL,"portuguese");	
	float a;
	printf("digite quantos produtos comprou: ");
	scanf("%f",&a);
	if(a<10){
		printf("voce comprou %.0f peça(s) voce vai pagar R$ %.2f",a, a*75);		
	}
	else
	if(a<=40){
		printf("voce comprou %.0f peças, voce recebe 10%% de desconto, ira pagar R$ %.2f",a, (a*75)*0.9);
	}
	else
	if(a<=100){
	printf("voce comprou %.0f peças, voce recebe 15%% de desconto, ira pagar R$ %.2f",a, (a*75)*0.85);
	}
	else {
		printf("voce comprou %.0f peças, voce recebe 25%% de desconto, ira pagar R$ %.2f",a, (a*75)*0.75);
	}
	getch();
	return 0;
}

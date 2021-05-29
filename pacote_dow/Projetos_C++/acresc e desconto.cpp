#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float v1, v2, acresc, desc;
	printf("digite o valor a sofreer acrescimo: ");
	scanf("%f",&v1);
	printf("digite o valor ater desconto: ");
	scanf("%f",&v2);
	acresc=v1*1.30;
	desc=v2*0.75;
	printf("\n\nO valor de R$ %.2f com 30%%  de acrescimo é R$ %.2f",v1, acresc);
	printf("\n\nO valor de R$ %.2f com 25%%  de desconto é R$ %.2f",v2, desc);
	getch();
	return 0;
}
	
	
	

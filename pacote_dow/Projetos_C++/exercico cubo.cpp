#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
float n, cubo;
printf("Digite um n�mero");
scanf("%f", &n);
cubo=pow(n,3);
printf("Seu numero ao cubo � %.2f", cubo);
	
	getch();
	return(0);
}

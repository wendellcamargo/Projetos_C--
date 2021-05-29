# include <stdio.h>
# include <conio.h>
# include <locale.h>
#define PI 3.14
int main (){
	setlocale(LC_ALL,"Portuguese");
	float c,r;
	printf("Digite o valor do Raio: ");
	scanf("%f",&r);
	c=2*PI*r;
	printf("O comprimento da circunferencia de raio %.2f é %.2f");
	getch();
	return 0;
}


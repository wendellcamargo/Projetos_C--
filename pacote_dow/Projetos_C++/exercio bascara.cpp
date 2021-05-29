#include <stdio.h>
#include<conio.h>
#include<locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,delta, x1, x2;
	printf("digite a varievel A: ");
	scanf("%f",&a);
	printf("digite a varievel B: ");
	scanf("%f",&b);
	printf("digite a varievel C: ");
	scanf("%f",&c);
	delta= pow(b,2)-4*a*c;
	// sqrt= raiz quadrada
	x1=(-b-sqrt(delta))/2*a;
	x2=(-b+sqrt(delta))/2*a;
	printf("o valor das raizes da equação sao x1 = %.2f e x2 = %.2f cujo delta é %.2f",x1, x1, delta);
	getch();
	return 0;
}
	

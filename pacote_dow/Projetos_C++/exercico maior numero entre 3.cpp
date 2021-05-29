# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float a, b, c;
	printf("digite um numero ");
	scanf("%f",&a);
	printf("digite um numero ");
	scanf("%f",&b);
	printf("digite um numero ");
	scanf("%f",&c);
	
	if(a==b and c==b){
		printf("Os 3 numeros sao iguais");
               }
	else
	if(a>b and a>c){
		printf("o valor %.2f é maior.",a);
	}
	else
	if(b>a and b>c){
		printf("O valor %.2f é maior",b);
	}
	else
    {
		printf("O valor %.2f é maior.",c);
	}
	
	
	
		getch();
		return 0;
	}
	
	
	

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a;
	printf("O triangulo tem 3, 2 ou nenhum lado igual? ");
	scanf("%i",&a);
	
	if(a==3){
		printf("Seu triangulo é equilatero");
	}
	else
	if(a==2){
		printf("Seu triangulo é isosceles");
	}
	else{
		printf("Seu triangulo é escaleno");
			}
			getch();
			return 0;
			
}

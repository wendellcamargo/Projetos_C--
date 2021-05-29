#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    char sexo;
    float altura, peso;
    printf(" digite a letra que representa seu sexo M-Masculino e F-Feminino ");
	scanf("%c",&sexo);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Seu peso ideal é: ");
	switch (sexo){
		case 'm': case'M' : peso=72.7*altura-58;
		printf("%.2f kg", peso); break;
		case 'f': case'F' : peso=62.1*altura-44.7;
		printf("%.2f kg", peso); break;
		default: ("genero nao encotrado");
	}
	
	getch();
	return 0;
}

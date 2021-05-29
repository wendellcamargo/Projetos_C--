#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
int n, n1, n2;
printf("Digite os dois primeiros digitos do ano de seu nascimentos: ");
scanf("%i",&n1);
printf("Digite os dois ultimos digitos do ano de seu nascimentos: ");
scanf("%i",&n2);
n=(n1+n2)%5;
printf("Seu perfil é :");
switch (n){
	case 0: printf("timido");break;
	case 1: printf("sonhador");break;
	case 2: printf("paquerador");break;
	case 3: printf("atraente");break;
	case 4: printf("irrestivel");break;
}	
	getch();
	return 0;
}

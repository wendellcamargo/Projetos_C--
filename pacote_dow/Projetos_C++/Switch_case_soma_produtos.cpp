# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cod, a, b, x;
printf("Digite o n�mero da op��o desejada:\n1-Quadrado da diferen�a\n2-Quadrado da soma");
printf("\n3-Soma do quadrado\n4-Diferen�a do quadrado\n5-Produto da soma pela diferen�a\nOp��o: ");
scanf("%d",&cod);
printf("Digite um n�mero inteiro ");
scanf ("%d",&a);
printf("Digite outro n�mero inteiro ");
scanf ("%d",&b);
switch (cod){
	case 1: x=(a - b)*(a - b);
	printf("O quadrado da diferen�a entre os n�meros %d e %d � %d",a,b,x); break;
	case 2: x=(a + b)*(a + b);
	printf("O quadrado da soma entre os n�meros %d e %d � %d",a,b,x); break;
	case 3: x=(a*a)+(b*b);
	printf("A soma do quadrado entre os n�meros %d e %d � %d",a,b,x); break;
	case 4: x=(a*a)-(b*b);
	printf("A diferen�a do quadrado entre os n�meros %d e %d � %d",a,b,x); break;
	case 5:{
		x=(a + b)*(a - b);
	printf("O produto da soma pela diferen�a entre os n�meros %d e %d � %d",a,b,x); break;
}
	default: ("Op��o inv�lida");
}
	getch();
	return 0;
}


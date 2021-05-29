# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cod, a, b, x;
printf("Digite o número da opção desejada:\n1-Quadrado da diferença\n2-Quadrado da soma");
printf("\n3-Soma do quadrado\n4-Diferença do quadrado\n5-Produto da soma pela diferença\nOpção: ");
scanf("%d",&cod);
printf("Digite um número inteiro ");
scanf ("%d",&a);
printf("Digite outro número inteiro ");
scanf ("%d",&b);
switch (cod){
	case 1: x=(a - b)*(a - b);
	printf("O quadrado da diferença entre os números %d e %d é %d",a,b,x); break;
	case 2: x=(a + b)*(a + b);
	printf("O quadrado da soma entre os números %d e %d é %d",a,b,x); break;
	case 3: x=(a*a)+(b*b);
	printf("A soma do quadrado entre os números %d e %d é %d",a,b,x); break;
	case 4: x=(a*a)-(b*b);
	printf("A diferença do quadrado entre os números %d e %d é %d",a,b,x); break;
	case 5:{
		x=(a + b)*(a - b);
	printf("O produto da soma pela diferença entre os números %d e %d é %d",a,b,x); break;
}
	default: ("Opção inválida");
}
	getch();
	return 0;
}


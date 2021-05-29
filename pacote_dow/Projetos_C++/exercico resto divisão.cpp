#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,resto;
	printf("Digite dosi numeros: ");
	scanf("%d%d",&n1,&n2);
	resto = n1%n2;
	printf("o resto da divisão entre os nuemros %d e %d é %d", n1,n2,resto);
	getch();
	return(0);
}

//70) Fa�a um programa que receba um n�mero inteiro positivo qualquer, calcule e mostre na 
//tela os n�meros pares e a m�dia dos n�meros �mpares compreendidos entre 1 e o n�mero 
//digitado. 

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float media;
int cont, soma=0, qtd=0, n;
printf("Digite um n�mero inteiro positivo diferente de 1 ");
scanf("%d",&n);
for(cont=1;cont<=n;cont++){
	if(cont%2==0){
		printf("O n�mero %d � par.\n",cont);
	}
	else{
		soma=soma+cont;
		qtd=qtd+1;
		//qtd++
	}
	}
	media=soma/qtd;
	printf("A m�dia dos %d n�meros �mpares compreendidos entre 1 e %d � %.2f.",qtd,n,media);
	getch();
	return 0;
}


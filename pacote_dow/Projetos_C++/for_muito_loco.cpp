//70) Faça um programa que receba um número inteiro positivo qualquer, calcule e mostre na 
//tela os números pares e a média dos números ímpares compreendidos entre 1 e o número 
//digitado. 

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float media;
int cont, soma=0, qtd=0, n;
printf("Digite um número inteiro positivo diferente de 1 ");
scanf("%d",&n);
for(cont=1;cont<=n;cont++){
	if(cont%2==0){
		printf("O número %d é par.\n",cont);
	}
	else{
		soma=soma+cont;
		qtd=qtd+1;
		//qtd++
	}
	}
	media=soma/qtd;
	printf("A média dos %d números ímpares compreendidos entre 1 e %d é %.2f.",qtd,n,media);
	getch();
	return 0;
}


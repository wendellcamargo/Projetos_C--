# include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	int n;
	printf("Digite um numero inteiro");
	scanf("%d",&n);
	if (n%2==0){
		printf("o numero %d é par",n);		
	}
	else{
		printf("o numero %d é impar",n);
	}
	
	getch();
	return 0;
	
}

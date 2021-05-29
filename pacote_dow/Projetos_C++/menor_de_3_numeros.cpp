#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){	
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, n3;
	printf("Digite um numero");
	scanf("%i",&n1);
	printf("Digite um numero");
	scanf("%i",&n2);
	printf("Digite um numero");
	scanf("%i",&n3);	
	if (n1<n2 && n1<n3){
		printf("o numero %i é o menor",n1);
	}
	else 
	if(n2<n1 && n2<n3){
		printf("o numero %i é o menor",n2);
	}
	else {
		printf("o numero %i é o menor",n3);
	}
	getch();
	return 0;
}

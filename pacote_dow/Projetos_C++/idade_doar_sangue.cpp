#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	if(idade>=18 and idade<=67){
		printf("Voc� tem idade para doar sangue! :D");
	}
	else {
		printf("Voc� nao tem idade para doar sangue! :C");
	}
	 getch();
	 return 0;
}

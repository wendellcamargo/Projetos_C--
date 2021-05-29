# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("você pode tirar CNH! :D");
	}
	else{
		idade=18-idade;
		printf("Você não pode tirar a CNH. Faltam(m) %d ano(s)",idade);
	}
	getch();
	return 0;
}

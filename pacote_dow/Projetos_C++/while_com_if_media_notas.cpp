# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float n1, n2, n3, media;
int alunos=1;
//int alunos=0; => while (alunos<3) ou while (alunos<=2) 
while (alunos<=3){
	// 1<=3 V executa
	// 2<=3 V executa
	// 3<=3 V executa
		// 4<=3 F não executa e sai da estrutura
printf("Digite a primeira nota ");
scanf("%f",&n1);
printf("Digite a segunda nota ");
scanf("%f",&n2);
printf("Digite a terceira nota ");
scanf("%f",&n3);
media=(n1+n2+n3)/3;
printf("Sua média é %.2f\n",media);
//alunos=alunos+1;
//alunos=1+1 = 2
//alunos=2+1 = 3
//alunos=3+1 = 4
if(media>=6){
	printf("Você está aprovado!\n\n");
}
else{
	printf("Você está reprovado.\n\n");
}
alunos++;
}
	getch();
	return 0;
}

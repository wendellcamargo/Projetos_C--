# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cont, n, qtdd=0, qtdf=0;
for(cont=1; cont<=10;cont++){
	printf("Digite um n�mero inteiro ");
	scanf("%d",&n);
	if(n>15 && n<35){
		qtdd=qtdd+1;
		//qtdd++;
	}
	else{
		qtdf=qtdf+1;
		//qtdf++;
	}
}
printf("A quantidade de n�meros dentro do intervalo entre 15 e 35 � %d.\n",qtdd);
printf("A quantidade de n�meros fora do intervalo entre 15 e 35 � %d.\n",qtdf);

	getch();
	return 0;
}

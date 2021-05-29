# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, n4, media;
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	printf("Digite a quarta nota ");
	scanf("%f",&n4);
	media=(n1+n2+n3+n4)/4;
	printf("A media é %.2f\n\n",media);
	if(media>=7){
		printf("Aprovado krl, vai pra casa!");
	}
	else {
		printf("Se fudeu!Reprovou, estuda mais!");
	}
	getch();
	return 0;
}

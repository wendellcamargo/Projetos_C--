# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float media;
int cont, soma=0, qtd=0;
for (cont=1000; cont<1300;cont++){
	//cont = 1000
	// cont = 1001
	//cont = 1002
	//cont=1003 ...
	//cont=1008
	if(cont%2==0 && cont%3==0){
		//if(1000%2==0 && 1000%3==0) => V && F = F sai do if
		//if(1001%2==0 && 1001%3==0) => F && F = F sai do if
		//if(1002%2==0 && 1002%3==0) => V && V = V entra no if ...
		//if(1008%2==0 && 1008%3==0) => V && V = V entra no if
		soma=soma+cont;
		//soma=0+1002=1002
		//soma=1002+1008=2010...
		qtd=qtd+1;
		//qtd=0+1=1
		//qtd=1+1=2...
	}
}
printf("A quantidade de número múltiplos de 2 e de 3 entre 999 e 1300 são %d.\n",qtd);
printf("A soma de número múltiplos de 2 e de 3 entre 999 e 1300 são %d.\n",soma);
media=soma/qtd;
printf("A média de todos os múltiplos de 2 e de 3 entre 999 e 1300 são %.2f.\n",media);
	getch();
	return 0;
}

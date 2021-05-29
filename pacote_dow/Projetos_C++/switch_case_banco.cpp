#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portugues");
	
int n;
printf("Digite a oção desejada :\n1 - saldo\n2 -  extrato\n3 - saque\n4 - sair\nOpcao:  ");
scanf("%i",&n);
switch (n){
	case 1: printf ("Saldo");break;
	case 2: printf ("Extrato");break;
	case 3: printf ("Saque");break;
	case 4: printf("Sair");break;
	default: printf("opcaoo invalida");
}


	
	getch();
	return 0;
}

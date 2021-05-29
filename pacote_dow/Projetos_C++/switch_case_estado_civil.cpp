#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portugues");
	
char c;
printf("Digite a letra que corresponde ao seu estado civil\ns-solteiro\nc-casado\nd-divorciado\nv-viuvo\nOpcao: ");
scanf("%c",&c);
switch (c){
	case's' : case'S' : printf("Solteiro");break;
	case'c' : case'C' : printf("Casado");break;
	case'd' : case'D' : printf("Divorciado");break;
	case'v' : case'V' : printf("Viuvo");break;
	default: printf ("Opcção invalida");
}	
	getch();
	return 0;
}

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int resp, cont;
for(cont=1;cont<=20;cont++){
	resp=cont*2;
	printf("O número %d é par.\n",resp);
}
	getch();
	return 0;
}

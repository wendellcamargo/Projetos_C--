# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i;
float v[5];
for (i=0;i<5;i++){
	printf("Digite um número ");
	scanf("%f",&v[i]);
}
printf("\n\n Os valores digitados por você pela metade\n\n");
for (i=0;i<5;i++){
v[i]=v[i]/2;
printf("%.2f\t",v[i]);
}
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, j, vet[3],m[3][3];
printf("Informe os elementos do vetor\n");
for(i=0;i<3;i++){
printf("Digite um número: ");
scanf("%d",&vet[i]);
}
printf("Informe os elementos da matriz\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("Digite um número: ");
scanf("%d",&m[i][j]);
}
}
printf("\n\n=== VETOR ===\n\n");
for(j=0;j<3;j++){
	printf("%d\t",vet[j]);
}
printf("\n\n=== MATRIZ ===\n\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
	printf("%d\t",m[i][j]);
}
	printf("\n");
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
	m[i][j]=vet[i]*m[i][j];
}
}
printf("\n\n=== MATRIZ ===\n\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
	printf("%d\t",m[i][j]);
}
	printf("\n");
}
	getch();
	return 0;
}




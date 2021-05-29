# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i,j,m[4][4];
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf("Digite um número inteiro ");
		scanf("%d",&m[i][j]);
	}
}
printf("\n\nA matriz é\n\n");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf("%d\t",m[i][j]);
	}
	printf("\n");
}
printf("\n\nElementos da diagonal principal\n\n");
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		if(i==j){
		printf("%d",m[i][j]);
	}
	printf("\t");
}
	printf("\n");
}
	getch();
	return 0;
}

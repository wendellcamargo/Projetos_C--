#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, j, m[3][3];
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("Digite um numero m[%d][%d]",i,j);
		scanf("%i",&m[i][j]);
	}
		}	
	printf("\n\nA matriz multiplicado por 5 \n\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d\t",m[i][j]*5);
		}
		printf("\n");
	}	
	getch();
	return 0;
}

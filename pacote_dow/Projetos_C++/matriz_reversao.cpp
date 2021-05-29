#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
int i, j, m[5][3], n[3][5];
for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		printf("Digite um numero m[%d][%d]",i,j);
		scanf("%d",&m[i][j]);
	}
}

printf("\n\nA matriz é \n\n");
for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
		
		
		printf("\n\nA matriz reversao é \n\n");
for(i=0;i<3;i++){
	for(j=0;j<5;j++){
		n[i][j]=m[j][i];
		printf("%d\t",n[i][j]);
		}
		printf("\n");
		}
		
		
		
	
	
	getch();
	return 0;

}

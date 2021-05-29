#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	printf("Digite o total de copias: ");
	scanf("%i",&n);
	
	if(n<=100){
		printf("O total  a ser pago por %d copias é R$ %.2f ",n , n*0.25);		
	}
	else{
	
	printf("o total a ser pago por %d copias é R$ %.2f",n, n*0.20);
}
	getch();
	return 0;
}

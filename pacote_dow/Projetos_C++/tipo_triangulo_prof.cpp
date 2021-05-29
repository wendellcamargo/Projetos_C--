#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float l1, l2, l3;
	printf("digite um lado");
	scanf("%f",&l1);
	printf("digite outro lado");
	scanf("%f",&l2);
	printf("digite outro lado");
	scanf("%f",&l3);
	
	if(l1==l2 && l1==l3){
		printf("o triangulo é equilatero");
	}
	else
	if(l1!=l2 && l1!=l3 && l2!=l3){
		printf("o triangulo é escaleno");
		
	}
	else{
		printf("o triangulo é isosceles.");
	}
	getch();
	return 0;
}

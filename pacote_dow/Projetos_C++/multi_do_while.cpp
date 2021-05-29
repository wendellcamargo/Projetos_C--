#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");	
int multi= 1;
int cal;
do{
	cal=multi*3;
	printf("\n3 x %i = %i\n",multi,cal);
	multi++;
}
while(multi<=20);	
	getch();
	return 0;
}

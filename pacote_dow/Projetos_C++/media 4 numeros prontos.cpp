/*  */

#include<stdio.h>
#include<conio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int media;
	
	media=(35+42+87+11)/4;
		printf("A media � %d",media);
	getch();
	return 0;
}

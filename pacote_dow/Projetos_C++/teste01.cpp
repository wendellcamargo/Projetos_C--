#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	

int k = 0, v[8], i, j;
for(i=0;i<4; i++){
	for(j=0;j<2;j++){
		v[k]=i;
		k ++;
	}
}
printf("%d",k);
	
	
	getch();
	return 0;
}

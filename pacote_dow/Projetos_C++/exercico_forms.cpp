#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
int x=10;
int y=5;
int z=-3;
int t=-7;

while(x>=5){
	z=x+y;
	t=y-x;
	x=x-1;
}

printf("%d%d%d%d",x,y,z,t);
	
	
	getch();
	return 0;
}

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n=1,resto;
while (n<=50){
	resto=n%2;
	if(resto==0){
		printf("O n�mero %d � par\n",n);
	}
	n++;
}
	getch();
	return 0;
}

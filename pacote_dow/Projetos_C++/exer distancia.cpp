# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float x1, x2, y1, y2, d;
	printf ("digite o valor x1 ");
	scanf("%f",&x1);
	printf ("digite o valor x2 ");
	scanf("%f",&x2);
	printf ("digite o valor y1 ");
	scanf("%f",&y1);
	printf ("digite o valor y2 ");
	scanf("%f",&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	//sqrt = raiz quadrada
printf("O valor da distância entre dois pontos é %.2f",d);
	
	
	getch();
	return 0;
	
}

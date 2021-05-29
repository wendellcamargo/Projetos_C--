# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo, x, y, result;
	x= 6;
	y =3;
	codigo = -x-y;
	switch(codigo){
		case 1:
			result=x+(y*3);
			break;
			case 2:
			result=x+-(y*2);
			break;
			case 3:
			result=x*(y+2);
			break;
			default:
				printf("\n codigo nao encotrado \n");
				
	}
	
	
	getch();
	return 0;
}


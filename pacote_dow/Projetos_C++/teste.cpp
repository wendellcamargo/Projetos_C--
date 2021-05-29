
#include <stdio.h>

long long n = get_long_long("Number: ");

char card_number[15];
sprintf(card_number, "%lld", n);
int length_number = strlen(card_number);


for(int i = 0; i < length_number; i++)
{
        printf("A soma entre %c e %c é: %i \n", (int) card_number[i], (int)card_number[i], (int)(card_number[i] * 2));

}

printf("%s\n", card_number);

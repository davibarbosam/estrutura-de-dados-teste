#include <stdio.h>
#include <stdlib.h>

int main()
{
int fatorial, num;
printf("Digite o numero para calculo do fatorial: ");
scanf("%d", &num);

for(fatorial = 1; num > 1; num--)
fatorial = fatorial * num;

printf("\nFatorial encontrado: %d", fatorial);
return 0;
}
